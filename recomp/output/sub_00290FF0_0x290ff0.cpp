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

// Function: sub_00290FF0
// Address: 0x290ff0 - 0x291068
void sub_00290FF0_0x290ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290FF0_0x290ff0");
#endif

    switch (ctx->pc) {
        case 0x291030u: goto label_291030;
        default: break;
    }

    ctx->pc = 0x290ff0u;

    // 0x290ff0: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x290ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x290ff4: 0x8c8801d4  lw          $t0, 0x1D4($a0)
    ctx->pc = 0x290ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x290ff8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x290ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x290ffc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x290ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x291000: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x291000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x291004: 0x5000007  bltz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291004u;
    {
        const bool branch_taken_0x291004 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x291008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291004u;
        // 0x291008: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291004) {
            ctx->pc = 0x291024u;
            goto label_291024;
        }
    }
    ctx->pc = 0x29100Cu;
    // 0x29100c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x29100cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x291010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291010u;
    {
        const bool branch_taken_0x291010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291010u;
        // 0x291014: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291010) {
            ctx->pc = 0x291028u;
            goto label_291028;
        }
    }
    ctx->pc = 0x291018u;
    // 0x291018: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x291018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29101c: 0x1102000d  beq         $t0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29101Cu;
    {
        const bool branch_taken_0x29101c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x291020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29101Cu;
        // 0x291020: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29101c) {
            ctx->pc = 0x291054u;
            goto label_291054;
        }
    }
    ctx->pc = 0x291024u;
label_291024:
    // 0x291024: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x291024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_291028:
    // 0x291028: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291028u;
    {
        const bool branch_taken_0x291028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291028u;
        // 0x29102c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291028) {
            ctx->pc = 0x29104Cu;
            goto label_29104c;
        }
    }
    ctx->pc = 0x291030u;
label_291030:
    // 0x291030: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x291030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291038: 0x0  nop
    ctx->pc = 0x291038u;
    // NOP
    // 0x29103c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29103cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x291040: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x291040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x291044: 0x3e00008  jr          $ra
    ctx->pc = 0x291044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291044u;
        // 0x291048: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29104Cu;
label_29104c:
    // 0x29104c: 0x3e00008  jr          $ra
    ctx->pc = 0x29104Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29104Cu;
        // 0x291050: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29104Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291054u;
label_291054:
    // 0x291054: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x291054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291058: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x291058u;
    {
        const bool branch_taken_0x291058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291058u;
        // 0x29105c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291058) {
            ctx->pc = 0x291030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291030;
        }
    }
    ctx->pc = 0x291060u;
    // 0x291060: 0x3e00008  jr          $ra
    ctx->pc = 0x291060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291060u;
        // 0x291064: 0xc4800078  lwc1        $f0, 0x78($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291068u;
}
