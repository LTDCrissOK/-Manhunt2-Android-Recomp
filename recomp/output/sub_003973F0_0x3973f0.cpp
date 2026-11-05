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

// Function: sub_003973F0
// Address: 0x3973f0 - 0x3974c0
void sub_003973F0_0x3973f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003973F0_0x3973f0");
#endif

    switch (ctx->pc) {
        case 0x397440u: goto label_397440;
        case 0x397450u: goto label_397450;
        case 0x397458u: goto label_397458;
        case 0x397460u: goto label_397460;
        default: break;
    }

    ctx->pc = 0x3973f0u;

    // 0x3973f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3973f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3973f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3973f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3973f8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x3973f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x3973fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3973fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397400: 0x26c319c0  addiu       $v1, $s6, 0x19C0
    ctx->pc = 0x397400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 6592));
    // 0x397404: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x397404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x397408: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x397408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39740c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x397410: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x397410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x397414: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x397414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x397418: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x397418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x39741c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x39741cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4019C0u));
    // 0x397420: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x397420u;
    {
        const bool branch_taken_0x397420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397420u;
        // 0x397424: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397420) {
            ctx->pc = 0x397478u;
            goto label_397478;
        }
    }
    ctx->pc = 0x397428u;
    // 0x397428: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x397428u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x39742c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x39742cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397430: 0x26b219b8  addiu       $s2, $s5, 0x19B8
    ctx->pc = 0x397430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 6584));
    // 0x397434: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x397434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397438: 0x2690196c  addiu       $s0, $s4, 0x196C
    ctx->pc = 0x397438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 6508));
    // 0x39743c: 0x0  nop
    ctx->pc = 0x39743cu;
    // NOP
label_397440:
    // 0x397440: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x397440u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x397444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397448: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x397448u;
    SET_GPR_U32(ctx, 31, 0x397450u);
    ctx->pc = 0x39744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397448u;
    // 0x39744c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x397448u, 0x397450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397450u;
label_397450:
    // 0x397450: 0xc0f2634  jal         func_3C98D0
    ctx->pc = 0x397450u;
    SET_GPR_U32(ctx, 31, 0x397458u);
    ctx->pc = 0x397454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397450u;
    // 0x397454: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98D0u, 0x397450u, 0x397458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397458u;
label_397458:
    // 0x397458: 0xc0e5b88  jal         func_396E20
    ctx->pc = 0x397458u;
    SET_GPR_U32(ctx, 31, 0x397460u);
    ctx->pc = 0x39745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397458u;
    // 0x39745c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E20u, 0x397458u, 0x397460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397460u;
label_397460:
    // 0x397460: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x397460u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x397464: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x397464u;
    {
        const bool branch_taken_0x397464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397464u;
        // 0x397468: 0x26c219c0  addiu       $v0, $s6, 0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397464) {
            ctx->pc = 0x397440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397440;
        }
    }
    ctx->pc = 0x39746Cu;
    // 0x39746c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39746Cu;
    {
        const bool branch_taken_0x39746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39746Cu;
        // 0x397470: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39746c) {
            ctx->pc = 0x397484u;
            goto label_397484;
        }
    }
    ctx->pc = 0x397474u;
    // 0x397474: 0x0  nop
    ctx->pc = 0x397474u;
    // NOP
label_397478:
    // 0x397478: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x397478u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x39747c: 0x26c219c0  addiu       $v0, $s6, 0x19C0
    ctx->pc = 0x39747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6592));
    // 0x397480: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x397480u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_397484:
    // 0x397484: 0x26a319b8  addiu       $v1, $s5, 0x19B8
    ctx->pc = 0x397484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6584));
    // 0x397488: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x397488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39748c: 0x2684196c  addiu       $a0, $s4, 0x196C
    ctx->pc = 0x39748cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6508));
    // 0x397490: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x397490u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x397498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39749c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39749cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3974a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3974a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3974a4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3974a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3974a8: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x3974a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x3974ac: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x3974acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x3974b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3974b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3974b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3974B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974B4u;
        // 0x3974b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3974B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3974BCu;
    // 0x3974bc: 0x0  nop
    ctx->pc = 0x3974bcu;
    // NOP
    ctx->pc = 0x3974c0u;
}
