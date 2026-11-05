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

// Function: sub_00276C38
// Address: 0x276c38 - 0x276d38
void sub_00276C38_0x276c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276C38_0x276c38");
#endif

    switch (ctx->pc) {
        case 0x276cbcu: goto label_276cbc;
        case 0x276cc4u: goto label_276cc4;
        case 0x276cd4u: goto label_276cd4;
        case 0x276cdcu: goto label_276cdc;
        case 0x276d14u: goto label_276d14;
        default: break;
    }

    ctx->pc = 0x276c38u;

    // 0x276c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276c40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x276c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x276c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c48: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x276c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x276c4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x276c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x276c50: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x276C50u;
    {
        const bool branch_taken_0x276c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276c50) {
            ctx->pc = 0x276C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276C50u;
            // 0x276c54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276D2Cu;
            goto label_276d2c;
        }
    }
    ctx->pc = 0x276C58u;
    // 0x276c58: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x276c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x276c5c: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x276C5Cu;
    {
        const bool branch_taken_0x276c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276c5c) {
            ctx->pc = 0x276C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276C5Cu;
            // 0x276c60: 0xae000144  sw          $zero, 0x144($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276D28u;
            goto label_276d28;
        }
    }
    ctx->pc = 0x276C64u;
    // 0x276c64: 0x8c430220  lw          $v1, 0x220($v0)
    ctx->pc = 0x276c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x276c68: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x276c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x276c6c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x276c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x276c70: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x276C70u;
    {
        const bool branch_taken_0x276c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276c70) {
            ctx->pc = 0x276C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276C70u;
            // 0x276c74: 0xae000144  sw          $zero, 0x144($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276D28u;
            goto label_276d28;
        }
    }
    ctx->pc = 0x276C78u;
    // 0x276c78: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276C78u;
    {
        const bool branch_taken_0x276c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C78u;
        // 0x276c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c78) {
            ctx->pc = 0x276C84u;
            goto label_276c84;
        }
    }
    ctx->pc = 0x276C80u;
    // 0x276c80: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x276c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_276c84:
    // 0x276c84: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x276c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276c88: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x276c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x276c8c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x276c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x276c90: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x276c90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x276c94: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x276c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x276c98: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x276c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x276c9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276ca0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x276ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x276ca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276ca8: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x276ca8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x276cac: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x276cacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x276cb0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x276cb0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x276cb4: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x276CB4u;
    SET_GPR_U32(ctx, 31, 0x276CBCu);
    ctx->pc = 0x276CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CB4u;
    // 0x276cb8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x276CB4u, 0x276CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CBCu;
label_276cbc:
    // 0x276cbc: 0xc0e3ff6  jal         func_38FFD8
    ctx->pc = 0x276CBCu;
    SET_GPR_U32(ctx, 31, 0x276CC4u);
    ctx->pc = 0x276CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CBCu;
    // 0x276cc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD8u, 0x276CBCu, 0x276CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CC4u;
label_276cc4:
    // 0x276cc4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x276cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x276cc8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x276cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x276ccc: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x276CCCu;
    SET_GPR_U32(ctx, 31, 0x276CD4u);
    ctx->pc = 0x276CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CCCu;
    // 0x276cd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x276CCCu, 0x276CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CD4u;
label_276cd4:
    // 0x276cd4: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x276CD4u;
    SET_GPR_U32(ctx, 31, 0x276CDCu);
    ctx->pc = 0x276CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CD4u;
    // 0x276cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x276CD4u, 0x276CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CDCu;
label_276cdc:
    // 0x276cdc: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x276cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x276ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276ce4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x276ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x276ce8: 0x8e060228  lw          $a2, 0x228($s0)
    ctx->pc = 0x276ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x276cec: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x276cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x276cf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x276cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x276cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276cf8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276cf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276cfc: 0xe6010144  swc1        $f1, 0x144($s0)
    ctx->pc = 0x276cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x276d00: 0x8cc50220  lw          $a1, 0x220($a2)
    ctx->pc = 0x276d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 544)));
    // 0x276d04: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x276d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x276d08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x276d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x276d0c: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x276D0Cu;
    SET_GPR_U32(ctx, 31, 0x276D14u);
    ctx->pc = 0x276D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D0Cu;
    // 0x276d10: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x276D0Cu, 0x276D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D14u;
label_276d14:
    // 0x276d14: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x276d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x276d18: 0x8c640220  lw          $a0, 0x220($v1)
    ctx->pc = 0x276d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x276d1c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x276d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x276d20: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x276d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x276d24: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x276d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_276d28:
    // 0x276d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276d2c:
    // 0x276d2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x276d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276d30: 0x3e00008  jr          $ra
    ctx->pc = 0x276D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D30u;
        // 0x276d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276D38u;
}
