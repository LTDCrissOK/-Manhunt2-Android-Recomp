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

// Function: sub_00397928
// Address: 0x397928 - 0x397a08
void sub_00397928_0x397928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397928_0x397928");
#endif

    switch (ctx->pc) {
        case 0x397960u: goto label_397960;
        case 0x397984u: goto label_397984;
        default: break;
    }

    ctx->pc = 0x397928u;

    // 0x397928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39792c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39792cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397930: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x397930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x397934: 0x2451191c  addiu       $s1, $v0, 0x191C
    ctx->pc = 0x397934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6428));
    // 0x397938: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x397938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40191Cu));
    // 0x39793c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397940: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x397940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x397944: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x397944u;
    {
        const bool branch_taken_0x397944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x397948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397944u;
        // 0x397948: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397944) {
            ctx->pc = 0x397990u;
            goto label_397990;
        }
    }
    ctx->pc = 0x39794Cu;
    // 0x39794c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39794cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x397950: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x397950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397954: 0x24501968  addiu       $s0, $v0, 0x1968
    ctx->pc = 0x397954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6504));
    // 0x397958: 0xc0f2628  jal         func_3C98A0
    ctx->pc = 0x397958u;
    SET_GPR_U32(ctx, 31, 0x397960u);
    ctx->pc = 0x39795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397958u;
    // 0x39795c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98A0u, 0x397958u, 0x397960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397960u;
label_397960:
    // 0x397960: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x397960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397964: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x397964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x397968: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x397968u;
    {
        const bool branch_taken_0x397968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397968u;
        // 0x39796c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397968) {
            ctx->pc = 0x397978u;
            goto label_397978;
        }
    }
    ctx->pc = 0x397970u;
    // 0x397970: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x397970u;
    {
        const bool branch_taken_0x397970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x397970) {
            ctx->pc = 0x397974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397970u;
            // 0x397974: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397994u;
            goto label_397994;
        }
    }
    ctx->pc = 0x397978u;
label_397978:
    // 0x397978: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x397978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39797c: 0xc0f2634  jal         func_3C98D0
    ctx->pc = 0x39797Cu;
    SET_GPR_U32(ctx, 31, 0x397984u);
    ctx->pc = 0x3C98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98D0u, 0x39797Cu, 0x397984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397984u;
label_397984:
    // 0x397984: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397988: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x397988u;
    {
        const bool branch_taken_0x397988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x397988) {
            ctx->pc = 0x39798Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397988u;
            // 0x39798c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397990u;
            goto label_397990;
        }
    }
    ctx->pc = 0x397990u;
label_397990:
    // 0x397990: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x397990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_397994:
    // 0x397994: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x397994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x397998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x397998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39799c: 0x3e00008  jr          $ra
    ctx->pc = 0x39799Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3979A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39799Cu;
        // 0x3979a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39799Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3979A4u;
    // 0x3979a4: 0x0  nop
    ctx->pc = 0x3979a4u;
    // NOP
    // 0x3979a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979ac: 0x0  nop
    ctx->pc = 0x3979acu;
    // NOP
    // 0x3979b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979b4: 0x0  nop
    ctx->pc = 0x3979b4u;
    // NOP
    // 0x3979b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979bc: 0x0  nop
    ctx->pc = 0x3979bcu;
    // NOP
    // 0x3979c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979c4: 0x0  nop
    ctx->pc = 0x3979c4u;
    // NOP
    // 0x3979c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979cc: 0x0  nop
    ctx->pc = 0x3979ccu;
    // NOP
    // 0x3979d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979d4: 0x0  nop
    ctx->pc = 0x3979d4u;
    // NOP
    // 0x3979d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979dc: 0x0  nop
    ctx->pc = 0x3979dcu;
    // NOP
    // 0x3979e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3979e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3979e4: 0x0  nop
    ctx->pc = 0x3979e4u;
    // NOP
    // 0x3979e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979ec: 0x0  nop
    ctx->pc = 0x3979ecu;
    // NOP
    // 0x3979f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979f4: 0x0  nop
    ctx->pc = 0x3979f4u;
    // NOP
    // 0x3979f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3979f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3979fc: 0x0  nop
    ctx->pc = 0x3979fcu;
    // NOP
    // 0x397a00: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x397a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x397a04: 0x0  nop
    ctx->pc = 0x397a04u;
    // NOP
    ctx->pc = 0x397a08u;
}
