#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002751F8
// Address: 0x2751f8 - 0x275268
void sub_002751F8_0x2751f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002751F8_0x2751f8");
#endif

    switch (ctx->pc) {
        case 0x275218u: goto label_275218;
        case 0x275230u: goto label_275230;
        case 0x275238u: goto label_275238;
        case 0x275240u: goto label_275240;
        case 0x275248u: goto label_275248;
        case 0x275250u: goto label_275250;
        case 0x275258u: goto label_275258;
        default: break;
    }

    ctx->pc = 0x2751f8u;

    // 0x2751f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2751f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2751fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2751fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x275200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275204: 0x24a58160  addiu       $a1, $a1, -0x7EA0
    ctx->pc = 0x275204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934880));
    // 0x275208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27520c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27520cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x275210: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x275210u;
    SET_GPR_U32(ctx, 31, 0x275218u);
    ctx->pc = 0x275214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275210u;
    // 0x275214: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x275210u, 0x275218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275218u;
label_275218:
    // 0x275218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x275218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27521c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x27521Cu;
    {
        const bool branch_taken_0x27521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27521c) {
            ctx->pc = 0x275220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27521Cu;
            // 0x275220: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27525Cu;
            goto label_27525c;
        }
    }
    ctx->pc = 0x275224u;
    // 0x275224: 0xa2000372  sb          $zero, 0x372($s0)
    ctx->pc = 0x275224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 882), (uint8_t)GPR_U32(ctx, 0));
    // 0x275228: 0xc09d6b0  jal         func_275AC0
    ctx->pc = 0x275228u;
    SET_GPR_U32(ctx, 31, 0x275230u);
    ctx->pc = 0x27522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275228u;
    // 0x27522c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275AC0u, 0x275228u, 0x275230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275230u;
label_275230:
    // 0x275230: 0xc09d230  jal         func_2748C0
    ctx->pc = 0x275230u;
    SET_GPR_U32(ctx, 31, 0x275238u);
    ctx->pc = 0x275234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275230u;
    // 0x275234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2748C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748C0u, 0x275230u, 0x275238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275238u;
label_275238:
    // 0x275238: 0xc09d07c  jal         func_2741F0
    ctx->pc = 0x275238u;
    SET_GPR_U32(ctx, 31, 0x275240u);
    ctx->pc = 0x27523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275238u;
    // 0x27523c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2741F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2741F0u, 0x275238u, 0x275240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275240u;
label_275240:
    // 0x275240: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x275240u;
    SET_GPR_U32(ctx, 31, 0x275248u);
    ctx->pc = 0x275244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275240u;
    // 0x275244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x275240u, 0x275248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275248u;
label_275248:
    // 0x275248: 0xc09d200  jal         func_274800
    ctx->pc = 0x275248u;
    SET_GPR_U32(ctx, 31, 0x275250u);
    ctx->pc = 0x27524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275248u;
    // 0x27524c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274800u, 0x275248u, 0x275250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275250u;
label_275250:
    // 0x275250: 0xc09d3b6  jal         func_274ED8
    ctx->pc = 0x275250u;
    SET_GPR_U32(ctx, 31, 0x275258u);
    ctx->pc = 0x275254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275250u;
    // 0x275254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274ED8u, 0x275250u, 0x275258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275258u;
label_275258:
    // 0x275258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27525c:
    // 0x27525c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275260: 0x3e00008  jr          $ra
    ctx->pc = 0x275260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275260u;
        // 0x275264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275268u;
}
