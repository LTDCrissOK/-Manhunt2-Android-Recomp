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

// Function: sub_00188C70
// Address: 0x188c70 - 0x188d90
void sub_00188C70_0x188c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188C70_0x188c70");
#endif

    switch (ctx->pc) {
        case 0x188c84u: goto label_188c84;
        case 0x188c98u: goto label_188c98;
        case 0x188ca4u: goto label_188ca4;
        case 0x188cb0u: goto label_188cb0;
        case 0x188cd8u: goto label_188cd8;
        case 0x188ce8u: goto label_188ce8;
        case 0x188d54u: goto label_188d54;
        case 0x188d7cu: goto label_188d7c;
        default: break;
    }

    ctx->pc = 0x188c70u;

    // 0x188c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188c78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x188c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x188c7c: 0xc061a16  jal         func_186858
    ctx->pc = 0x188C7Cu;
    SET_GPR_U32(ctx, 31, 0x188C84u);
    ctx->pc = 0x188C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C7Cu;
    // 0x188c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x188C7Cu, 0x188C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C84u;
label_188c84:
    // 0x188c84: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x188c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c90: 0xc061a16  jal         func_186858
    ctx->pc = 0x188C90u;
    SET_GPR_U32(ctx, 31, 0x188C98u);
    ctx->pc = 0x188C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C90u;
    // 0x188c94: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x188C90u, 0x188C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C98u;
label_188c98:
    // 0x188c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c9c: 0xc061a16  jal         func_186858
    ctx->pc = 0x188C9Cu;
    SET_GPR_U32(ctx, 31, 0x188CA4u);
    ctx->pc = 0x188CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C9Cu;
    // 0x188ca0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x188C9Cu, 0x188CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CA4u;
label_188ca4:
    // 0x188ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ca8: 0xc06ee66  jal         func_1BB998
    ctx->pc = 0x188CA8u;
    SET_GPR_U32(ctx, 31, 0x188CB0u);
    ctx->pc = 0x188CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188CA8u;
    // 0x188cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x188CA8u, 0x188CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CB0u;
label_188cb0:
    // 0x188cb0: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x188cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x188cb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x188cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188cb8: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x188cbc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x188cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x188cc0: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x188cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x188cc4: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x188cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x188cc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188CC8u;
    {
        const bool branch_taken_0x188cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CC8u;
        // 0x188ccc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cc8) {
            ctx->pc = 0x188CF0u;
            goto label_188cf0;
        }
    }
    ctx->pc = 0x188CD0u;
    // 0x188cd0: 0xc095510  jal         func_255440
    ctx->pc = 0x188CD0u;
    SET_GPR_U32(ctx, 31, 0x188CD8u);
    ctx->pc = 0x255440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255440u, 0x188CD0u, 0x188CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CD8u;
label_188cd8:
    // 0x188cd8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x188cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x188cdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x188cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x188ce0: 0xc062364  jal         func_188D90
    ctx->pc = 0x188CE0u;
    SET_GPR_U32(ctx, 31, 0x188CE8u);
    ctx->pc = 0x188CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188CE0u;
    // 0x188ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188D90u, 0x188CE0u, 0x188CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CE8u;
label_188ce8:
    // 0x188ce8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x188CE8u;
    {
        const bool branch_taken_0x188ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CE8u;
        // 0x188cec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ce8) {
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188CF0u;
label_188cf0:
    // 0x188cf0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x188cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x188cf4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188CF4u;
    {
        const bool branch_taken_0x188cf4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x188CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF4u;
        // 0x188cf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cf4) {
            ctx->pc = 0x188D10u;
            goto label_188d10;
        }
    }
    ctx->pc = 0x188CFCu;
    // 0x188cfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d00: 0x0  nop
    ctx->pc = 0x188d00u;
    // NOP
    // 0x188d04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x188d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x188D08u;
    {
        const bool branch_taken_0x188d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d08) {
            ctx->pc = 0x188D28u;
            goto label_188d28;
        }
    }
    ctx->pc = 0x188D10u;
label_188d10:
    // 0x188d10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188d14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x188d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x188d18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d1c: 0x0  nop
    ctx->pc = 0x188d1cu;
    // NOP
    // 0x188d20: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x188d24: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x188d24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_188d28:
    // 0x188d28: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x188d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x188d2c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x188d2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x188d30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d34: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x188d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d38: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188d40: 0x0  nop
    ctx->pc = 0x188d40u;
    // NOP
    // 0x188d44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x188D44u;
    {
        const bool branch_taken_0x188d44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D44u;
        // 0x188d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d44) {
            ctx->pc = 0x188D5Cu;
            goto label_188d5c;
        }
    }
    ctx->pc = 0x188D4Cu;
    // 0x188d4c: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x188D4Cu;
    SET_GPR_U32(ctx, 31, 0x188D54u);
    ctx->pc = 0x188D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D4Cu;
    // 0x188d50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x188D4Cu, 0x188D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D54u;
label_188d54:
    // 0x188d54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x188D54u;
    {
        const bool branch_taken_0x188d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D54u;
        // 0x188d58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d54) {
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188D5Cu;
label_188d5c:
    // 0x188d5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x188d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188d60: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x188d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x188d64: 0x8ca30334  lw          $v1, 0x334($a1)
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
    // 0x188d68: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x188d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x188d6c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188D6Cu;
    {
        const bool branch_taken_0x188d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x188D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D6Cu;
        // 0x188d70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d6c) {
            ctx->pc = 0x188D80u;
            goto label_188d80;
        }
    }
    ctx->pc = 0x188D74u;
    // 0x188d74: 0xc09550c  jal         func_255430
    ctx->pc = 0x188D74u;
    SET_GPR_U32(ctx, 31, 0x188D7Cu);
    ctx->pc = 0x188D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D74u;
    // 0x188d78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255430u, 0x188D74u, 0x188D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D7Cu;
label_188d7c:
    // 0x188d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188d80:
    // 0x188d80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x188d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188d84: 0x3e00008  jr          $ra
    ctx->pc = 0x188D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D84u;
        // 0x188d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188D8Cu;
    // 0x188d8c: 0x0  nop
    ctx->pc = 0x188d8cu;
    // NOP
    ctx->pc = 0x188d90u;
}
