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

// Function: sub_00191C00
// Address: 0x191c00 - 0x191cc8
void sub_00191C00_0x191c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191C00_0x191c00");
#endif

    switch (ctx->pc) {
        case 0x191c00u: goto label_191c00;
        case 0x191c04u: goto label_191c04;
        case 0x191c08u: goto label_191c08;
        case 0x191c0cu: goto label_191c0c;
        case 0x191c10u: goto label_191c10;
        case 0x191c14u: goto label_191c14;
        case 0x191c18u: goto label_191c18;
        case 0x191c1cu: goto label_191c1c;
        case 0x191c20u: goto label_191c20;
        case 0x191c24u: goto label_191c24;
        case 0x191c28u: goto label_191c28;
        case 0x191c2cu: goto label_191c2c;
        case 0x191c30u: goto label_191c30;
        case 0x191c34u: goto label_191c34;
        case 0x191c38u: goto label_191c38;
        case 0x191c3cu: goto label_191c3c;
        case 0x191c40u: goto label_191c40;
        case 0x191c44u: goto label_191c44;
        case 0x191c48u: goto label_191c48;
        case 0x191c4cu: goto label_191c4c;
        case 0x191c50u: goto label_191c50;
        case 0x191c54u: goto label_191c54;
        case 0x191c58u: goto label_191c58;
        case 0x191c5cu: goto label_191c5c;
        case 0x191c60u: goto label_191c60;
        case 0x191c64u: goto label_191c64;
        case 0x191c68u: goto label_191c68;
        case 0x191c6cu: goto label_191c6c;
        case 0x191c70u: goto label_191c70;
        case 0x191c74u: goto label_191c74;
        case 0x191c78u: goto label_191c78;
        case 0x191c7cu: goto label_191c7c;
        case 0x191c80u: goto label_191c80;
        case 0x191c84u: goto label_191c84;
        case 0x191c88u: goto label_191c88;
        case 0x191c8cu: goto label_191c8c;
        case 0x191c90u: goto label_191c90;
        case 0x191c94u: goto label_191c94;
        case 0x191c98u: goto label_191c98;
        case 0x191c9cu: goto label_191c9c;
        case 0x191ca0u: goto label_191ca0;
        case 0x191ca4u: goto label_191ca4;
        case 0x191ca8u: goto label_191ca8;
        case 0x191cacu: goto label_191cac;
        case 0x191cb0u: goto label_191cb0;
        case 0x191cb4u: goto label_191cb4;
        case 0x191cb8u: goto label_191cb8;
        case 0x191cbcu: goto label_191cbc;
        case 0x191cc0u: goto label_191cc0;
        case 0x191cc4u: goto label_191cc4;
        default: break;
    }

    ctx->pc = 0x191c00u;

label_191c00:
    // 0x191c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191c04:
    // 0x191c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x191c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_191c08:
    // 0x191c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x191c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_191c0c:
    // 0x191c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191c10:
    // 0x191c10: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x191c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_191c14:
    // 0x191c14: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_191c18:
    if (ctx->pc == 0x191C18u) {
        ctx->pc = 0x191C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C14u;
        // 0x191c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C1Cu;
        goto label_191c1c;
    }
    ctx->pc = 0x191C14u;
    {
        const bool branch_taken_0x191c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c14) {
            ctx->pc = 0x191C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191C14u;
            // 0x191c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191CB8u;
            goto label_191cb8;
        }
    }
    ctx->pc = 0x191C1Cu;
label_191c1c:
    // 0x191c1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x191c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_191c20:
    // 0x191c20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_191c24:
    if (ctx->pc == 0x191C24u) {
        ctx->pc = 0x191C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C20u;
        // 0x191c24: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C28u;
        goto label_191c28;
    }
    ctx->pc = 0x191C20u;
    {
        const bool branch_taken_0x191c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C20u;
        // 0x191c24: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c20) {
            ctx->pc = 0x191C38u;
            goto label_191c38;
        }
    }
    ctx->pc = 0x191C28u;
label_191c28:
    // 0x191c28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x191c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_191c2c:
    // 0x191c2c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x191c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_191c30:
    // 0x191c30: 0x40f809  jalr        $v0
label_191c34:
    if (ctx->pc == 0x191C34u) {
        ctx->pc = 0x191C38u;
        goto label_191c38;
    }
    ctx->pc = 0x191C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191C38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C30u, 0x191C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191C38u;
label_191c38:
    // 0x191c38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x191c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_191c3c:
    // 0x191c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191c40:
    // 0x191c40: 0xc60c0098  lwc1        $f12, 0x98($s0)
    ctx->pc = 0x191c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191c44:
    // 0x191c44: 0xc0641ec  jal         func_1907B0
label_191c48:
    if (ctx->pc == 0x191C48u) {
        ctx->pc = 0x191C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C44u;
        // 0x191c48: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C4Cu;
        goto label_191c4c;
    }
    ctx->pc = 0x191C44u;
    SET_GPR_U32(ctx, 31, 0x191C4Cu);
    ctx->pc = 0x191C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C44u;
    // 0x191c48: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1907B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1907B0u, 0x191C44u, 0x191C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C4Cu;
label_191c4c:
    // 0x191c4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x191c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_191c50:
    // 0x191c50: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x191c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_191c54:
    // 0x191c54: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_191c58:
    if (ctx->pc == 0x191C58u) {
        ctx->pc = 0x191C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C54u;
        // 0x191c58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C5Cu;
        goto label_191c5c;
    }
    ctx->pc = 0x191C54u;
    {
        const bool branch_taken_0x191c54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x191C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C54u;
        // 0x191c58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c54) {
            ctx->pc = 0x191C70u;
            goto label_191c70;
        }
    }
    ctx->pc = 0x191C5Cu;
label_191c5c:
    // 0x191c5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191c60:
    // 0x191c60: 0x0  nop
    ctx->pc = 0x191c60u;
    // NOP
label_191c64:
    // 0x191c64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_191c68:
    // 0x191c68: 0x10000007  b           . + 4 + (0x7 << 2)
label_191c6c:
    if (ctx->pc == 0x191C6Cu) {
        ctx->pc = 0x191C70u;
        goto label_191c70;
    }
    ctx->pc = 0x191C68u;
    {
        const bool branch_taken_0x191c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c68) {
            ctx->pc = 0x191C88u;
            goto label_191c88;
        }
    }
    ctx->pc = 0x191C70u;
label_191c70:
    // 0x191c70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_191c74:
    // 0x191c74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_191c78:
    // 0x191c78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191c7c:
    // 0x191c7c: 0x0  nop
    ctx->pc = 0x191c7cu;
    // NOP
label_191c80:
    // 0x191c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_191c84:
    // 0x191c84: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x191c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_191c88:
    // 0x191c88: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x191c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_191c8c:
    // 0x191c8c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x191c8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_191c90:
    // 0x191c90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191c90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191c94:
    // 0x191c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191c98:
    // 0x191c98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x191c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_191c9c:
    // 0x191c9c: 0xc061a16  jal         func_186858
label_191ca0:
    if (ctx->pc == 0x191CA0u) {
        ctx->pc = 0x191CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C9Cu;
        // 0x191ca0: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CA4u;
        goto label_191ca4;
    }
    ctx->pc = 0x191C9Cu;
    SET_GPR_U32(ctx, 31, 0x191CA4u);
    ctx->pc = 0x191CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C9Cu;
    // 0x191ca0: 0xe60000a0  swc1        $f0, 0xA0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x191C9Cu, 0x191CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191CA4u;
label_191ca4:
    // 0x191ca4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x191ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_191ca8:
    // 0x191ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x191ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191cac:
    // 0x191cac: 0x0  nop
    ctx->pc = 0x191cacu;
    // NOP
label_191cb0:
    // 0x191cb0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x191cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_191cb4:
    // 0x191cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191cb8:
    // 0x191cb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x191cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_191cbc:
    // 0x191cbc: 0x3e00008  jr          $ra
label_191cc0:
    if (ctx->pc == 0x191CC0u) {
        ctx->pc = 0x191CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CBCu;
        // 0x191cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CC4u;
        goto label_191cc4;
    }
    ctx->pc = 0x191CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CBCu;
        // 0x191cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191CC4u;
label_191cc4:
    // 0x191cc4: 0x0  nop
    ctx->pc = 0x191cc4u;
    // NOP
    ctx->pc = 0x191cc8u;
}
