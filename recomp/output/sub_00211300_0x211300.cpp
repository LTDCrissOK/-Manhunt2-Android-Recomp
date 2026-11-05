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

// Function: sub_00211300
// Address: 0x211300 - 0x211368
void sub_00211300_0x211300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211300_0x211300");
#endif

    switch (ctx->pc) {
        case 0x211334u: goto label_211334;
        case 0x211348u: goto label_211348;
        default: break;
    }

    ctx->pc = 0x211300u;

    // 0x211300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21130c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21130cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211310: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x211310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x211314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211318: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x211318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21131c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x21131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x211320: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x211320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x211324: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x211324u;
    {
        const bool branch_taken_0x211324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211324u;
        // 0x211328: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211324) {
            ctx->pc = 0x211348u;
            goto label_211348;
        }
    }
    ctx->pc = 0x21132Cu;
    // 0x21132c: 0xc0c67da  jal         func_319F68
    ctx->pc = 0x21132Cu;
    SET_GPR_U32(ctx, 31, 0x211334u);
    ctx->pc = 0x211330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21132Cu;
    // 0x211330: 0x8e0401a0  lw          $a0, 0x1A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F68u, 0x21132Cu, 0x211334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211334u;
label_211334:
    // 0x211334: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21133c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21133cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211340: 0xc0844ac  jal         func_2112B0
    ctx->pc = 0x211340u;
    SET_GPR_U32(ctx, 31, 0x211348u);
    ctx->pc = 0x211344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211340u;
    // 0x211344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2112B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2112B0u, 0x211340u, 0x211348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211348u;
label_211348:
    // 0x211348: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x211348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21134c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21134cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211358: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x211358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21135c: 0x3e00008  jr          $ra
    ctx->pc = 0x21135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21135Cu;
        // 0x211360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211364u;
    // 0x211364: 0x0  nop
    ctx->pc = 0x211364u;
    // NOP
    ctx->pc = 0x211368u;
}
