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

// Function: sub_00248D28
// Address: 0x248d28 - 0x248dc8
void sub_00248D28_0x248d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248D28_0x248d28");
#endif

    switch (ctx->pc) {
        case 0x248d58u: goto label_248d58;
        default: break;
    }

    ctx->pc = 0x248d28u;

    // 0x248d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248d2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x248d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x248d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248d34: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x248d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x248d38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x248d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x248d3c: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x248d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x248d40: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x248d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x248d44: 0x8ca20418  lw          $v0, 0x418($a1)
    ctx->pc = 0x248d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1048)));
    // 0x248d48: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248D48u;
    {
        const bool branch_taken_0x248d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x248D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D48u;
        // 0x248d4c: 0x24705870  addiu       $s0, $v1, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d48) {
            ctx->pc = 0x248D60u;
            goto label_248d60;
        }
    }
    ctx->pc = 0x248D50u;
    // 0x248d50: 0xc092432  jal         func_2490C8
    ctx->pc = 0x248D50u;
    SET_GPR_U32(ctx, 31, 0x248D58u);
    ctx->pc = 0x248D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248D50u;
    // 0x248d54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x248D50u, 0x248D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D58u;
label_248d58:
    // 0x248d58: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x248D58u;
    {
        const bool branch_taken_0x248d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d58) {
            ctx->pc = 0x248D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248D58u;
            // 0x248d5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248D68u;
            goto label_248d68;
        }
    }
    ctx->pc = 0x248D60u;
label_248d60:
    // 0x248d60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x248D60u;
    {
        const bool branch_taken_0x248d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D60u;
        // 0x248d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d60) {
            ctx->pc = 0x248DB8u;
            goto label_248db8;
        }
    }
    ctx->pc = 0x248D68u;
label_248d68:
    // 0x248d68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248D68u;
    {
        const bool branch_taken_0x248d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D68u;
        // 0x248d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d68) {
            ctx->pc = 0x248D80u;
            goto label_248d80;
        }
    }
    ctx->pc = 0x248D70u;
    // 0x248d70: 0x920202f1  lbu         $v0, 0x2F1($s0)
    ctx->pc = 0x248d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 753)));
    // 0x248d74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x248D74u;
    {
        const bool branch_taken_0x248d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d74) {
            ctx->pc = 0x248D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248D74u;
            // 0x248d78: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248D7Cu;
            goto label_248d7c;
        }
    }
    ctx->pc = 0x248D7Cu;
label_248d7c:
    // 0x248d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248d80:
    // 0x248d80: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x248d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x248d84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x248d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x248d88: 0x24634dd0  addiu       $v1, $v1, 0x4DD0
    ctx->pc = 0x248d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19920));
    // 0x248d8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d90: 0xc46103d4  lwc1        $f1, 0x3D4($v1)
    ctx->pc = 0x248d90u;
    { uint32_t bits = FAST_READ32(0x5951A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248d94: 0xc46003d8  lwc1        $f0, 0x3D8($v1)
    ctx->pc = 0x248d94u;
    { uint32_t bits = FAST_READ32(0x5951A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248d98: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x248d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x248d9c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x248d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x248da0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x248da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x248da4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x248da4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248da8: 0x0  nop
    ctx->pc = 0x248da8u;
    // NOP
    // 0x248dac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x248dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x248db0: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x248db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x248db4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x248db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_248db8:
    // 0x248db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x248dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x248DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DC0u;
        // 0x248dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248DC8u;
}
