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

// Function: sub_003381A0
// Address: 0x3381a0 - 0x338220
void sub_003381A0_0x3381a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003381A0_0x3381a0");
#endif

    switch (ctx->pc) {
        case 0x3381c8u: goto label_3381c8;
        case 0x3381e4u: goto label_3381e4;
        case 0x3381f4u: goto label_3381f4;
        case 0x33820cu: goto label_33820c;
        default: break;
    }

    ctx->pc = 0x3381a0u;

    // 0x3381a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3381a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3381a4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3381a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3381a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3381a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3381ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3381acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3381b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3381b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3381b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3381b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3381b8: 0x8c4521e0  lw          $a1, 0x21E0($v0)
    ctx->pc = 0x3381b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5B21E0u));
    // 0x3381bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3381bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3381c0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x3381C0u;
    SET_GPR_U32(ctx, 31, 0x3381C8u);
    ctx->pc = 0x3381C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3381C0u;
    // 0x3381c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x3381C0u, 0x3381C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3381C8u;
label_3381c8:
    // 0x3381c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3381C8u;
    {
        const bool branch_taken_0x3381c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3381CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381C8u;
        // 0x3381cc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381c8) {
            ctx->pc = 0x3381DCu;
            goto label_3381dc;
        }
    }
    ctx->pc = 0x3381D0u;
    // 0x3381d0: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3381d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x3381d4: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3381D4u;
    {
        const bool branch_taken_0x3381d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3381d4) {
            ctx->pc = 0x338204u;
            goto label_338204;
        }
    }
    ctx->pc = 0x3381DCu;
label_3381dc:
    // 0x3381dc: 0xc085d4e  jal         func_217538
    ctx->pc = 0x3381DCu;
    SET_GPR_U32(ctx, 31, 0x3381E4u);
    ctx->pc = 0x3381E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3381DCu;
    // 0x3381e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x3381DCu, 0x3381E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3381E4u;
label_3381e4:
    // 0x3381e4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3381E4u;
    {
        const bool branch_taken_0x3381e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3381e4) {
            ctx->pc = 0x3381E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3381E4u;
            // 0x3381e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33820Cu;
            goto label_33820c;
        }
    }
    ctx->pc = 0x3381ECu;
    // 0x3381ec: 0xc0cd984  jal         func_336610
    ctx->pc = 0x3381ECu;
    SET_GPR_U32(ctx, 31, 0x3381F4u);
    ctx->pc = 0x3381F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3381ECu;
    // 0x3381f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x3381ECu, 0x3381F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3381F4u;
label_3381f4:
    // 0x3381f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3381F4u;
    {
        const bool branch_taken_0x3381f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3381F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381F4u;
        // 0x3381f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381f4) {
            ctx->pc = 0x338204u;
            goto label_338204;
        }
    }
    ctx->pc = 0x3381FCu;
    // 0x3381fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3381FCu;
    {
        const bool branch_taken_0x3381fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381FCu;
        // 0x338200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381fc) {
            ctx->pc = 0x33820Cu;
            goto label_33820c;
        }
    }
    ctx->pc = 0x338204u;
label_338204:
    // 0x338204: 0xc0cd5bc  jal         func_3356F0
    ctx->pc = 0x338204u;
    SET_GPR_U32(ctx, 31, 0x33820Cu);
    ctx->pc = 0x338208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338204u;
    // 0x338208: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3356F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356F0u, 0x338204u, 0x33820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33820Cu;
label_33820c:
    // 0x33820c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33820cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338218: 0x3e00008  jr          $ra
    ctx->pc = 0x338218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338218u;
        // 0x33821c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338220u;
}
