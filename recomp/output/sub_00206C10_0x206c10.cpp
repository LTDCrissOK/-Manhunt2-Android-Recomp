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

// Function: sub_00206C10
// Address: 0x206c10 - 0x206e80
void sub_00206C10_0x206c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206C10_0x206c10");
#endif

    switch (ctx->pc) {
        case 0x206c78u: goto label_206c78;
        case 0x206c9cu: goto label_206c9c;
        case 0x206cb4u: goto label_206cb4;
        case 0x206ce0u: goto label_206ce0;
        case 0x206cf4u: goto label_206cf4;
        case 0x206d10u: goto label_206d10;
        case 0x206d40u: goto label_206d40;
        case 0x206d7cu: goto label_206d7c;
        case 0x206db4u: goto label_206db4;
        case 0x206dbcu: goto label_206dbc;
        case 0x206dccu: goto label_206dcc;
        case 0x206df8u: goto label_206df8;
        case 0x206e08u: goto label_206e08;
        case 0x206e10u: goto label_206e10;
        case 0x206e1cu: goto label_206e1c;
        case 0x206e28u: goto label_206e28;
        case 0x206e30u: goto label_206e30;
        case 0x206e3cu: goto label_206e3c;
        case 0x206e48u: goto label_206e48;
        default: break;
    }

    ctx->pc = 0x206c10u;

    // 0x206c10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x206c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x206c14: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x206c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x206c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x206c20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x206c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x206c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x206c28: 0x24510480  addiu       $s1, $v0, 0x480
    ctx->pc = 0x206c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x206c2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x206c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x206c30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x206c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x206c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x206c38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x206c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c3c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x206c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x206c40: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x206c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c44: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x206c44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x206c48: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x206c48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c4c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x206c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x206c50: 0x4487a800  mtc1        $a3, $f21
    ctx->pc = 0x206c50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x206c54: 0x0  nop
    ctx->pc = 0x206c54u;
    // NOP
    // 0x206c58: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x206c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x206c5c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x206c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x206c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c64: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x206c64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x206c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x206c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x206c6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x206c6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c70: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x206C70u;
    SET_GPR_U32(ctx, 31, 0x206C78u);
    ctx->pc = 0x206C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C70u;
    // 0x206c74: 0xe7b60060  swc1        $f22, 0x60($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x206C70u, 0x206C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C78u;
label_206c78:
    // 0x206c78: 0x0  nop
    ctx->pc = 0x206c78u;
    // NOP
    // 0x206c7c: 0x0  nop
    ctx->pc = 0x206c7cu;
    // NOP
    // 0x206c80: 0x46000504  c1          0x504
    ctx->pc = 0x206c80u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x206c84: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x206c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206c88: 0x0  nop
    ctx->pc = 0x206c88u;
    // NOP
    // 0x206c8c: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x206C8Cu;
    {
        const bool branch_taken_0x206c8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C8Cu;
        // 0x206c90: 0x8e550064  lw          $s5, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c8c) {
            ctx->pc = 0x206D84u;
            goto label_206d84;
        }
    }
    ctx->pc = 0x206C94u;
    // 0x206c94: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x206C94u;
    SET_GPR_U32(ctx, 31, 0x206C9Cu);
    ctx->pc = 0x206C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C94u;
    // 0x206c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x206C94u, 0x206C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C9Cu;
label_206c9c:
    // 0x206c9c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x206c9cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x206ca0: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x206ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x206ca4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x206ca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x206ca8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x206ca8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x206cac: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x206CACu;
    SET_GPR_U32(ctx, 31, 0x206CB4u);
    ctx->pc = 0x206CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CACu;
    // 0x206cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x206CACu, 0x206CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CB4u;
label_206cb4:
    // 0x206cb4: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x206cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x206cb8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x206CB8u;
    {
        const bool branch_taken_0x206cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CB8u;
        // 0x206cbc: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cb8) {
            ctx->pc = 0x206CFCu;
            goto label_206cfc;
        }
    }
    ctx->pc = 0x206CC0u;
    // 0x206cc0: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x206cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x206cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206CC4u;
    {
        const bool branch_taken_0x206cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CC4u;
        // 0x206cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cc4) {
            ctx->pc = 0x206CD4u;
            goto label_206cd4;
        }
    }
    ctx->pc = 0x206CCCu;
    // 0x206ccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x206CCCu;
    {
        const bool branch_taken_0x206ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CCCu;
        // 0x206cd0: 0xe6560034  swc1        $f22, 0x34($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ccc) {
            ctx->pc = 0x206CE0u;
            goto label_206ce0;
        }
    }
    ctx->pc = 0x206CD4u;
label_206cd4:
    // 0x206cd4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x206cd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x206cd8: 0xc07e6e4  jal         func_1F9B90
    ctx->pc = 0x206CD8u;
    SET_GPR_U32(ctx, 31, 0x206CE0u);
    ctx->pc = 0x206CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CD8u;
    // 0x206cdc: 0x26450034  addiu       $a1, $s2, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B90u, 0x206CD8u, 0x206CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CE0u;
label_206ce0:
    // 0x206ce0: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x206ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x206ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x206ce8: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x206ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x206cec: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x206CECu;
    SET_GPR_U32(ctx, 31, 0x206CF4u);
    ctx->pc = 0x206CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CECu;
    // 0x206cf0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x206CECu, 0x206CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CF4u;
label_206cf4:
    // 0x206cf4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206cf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x206cf8: 0xe6410064  swc1        $f1, 0x64($s2)
    ctx->pc = 0x206cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
label_206cfc:
    // 0x206cfc: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x206CFCu;
    {
        const bool branch_taken_0x206cfc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x206D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CFCu;
        // 0x206d00: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cfc) {
            ctx->pc = 0x206D14u;
            goto label_206d14;
        }
    }
    ctx->pc = 0x206D04u;
    // 0x206d04: 0x26e40480  addiu       $a0, $s7, 0x480
    ctx->pc = 0x206d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1152));
    // 0x206d08: 0xc07dcdc  jal         func_1F7370
    ctx->pc = 0x206D08u;
    SET_GPR_U32(ctx, 31, 0x206D10u);
    ctx->pc = 0x206D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D08u;
    // 0x206d0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7370u, 0x206D08u, 0x206D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D10u;
label_206d10:
    // 0x206d10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x206d10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206d14:
    // 0x206d14: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x206d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x206d18: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x206D18u;
    {
        const bool branch_taken_0x206d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d18) {
            ctx->pc = 0x206D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D18u;
            // 0x206d1c: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D48u;
            goto label_206d48;
        }
    }
    ctx->pc = 0x206D20u;
    // 0x206d20: 0xc64c0064  lwc1        $f12, 0x64($s2)
    ctx->pc = 0x206d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x206d24: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x206d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x206d28: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x206d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x206d2c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x206d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x206d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206d34: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x206d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x206d38: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x206D38u;
    SET_GPR_U32(ctx, 31, 0x206D40u);
    ctx->pc = 0x206D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D38u;
    // 0x206d3c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x206D38u, 0x206D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D40u;
label_206d40:
    // 0x206d40: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x206D40u;
    {
        const bool branch_taken_0x206d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D40u;
        // 0x206d44: 0xa2400068  sb          $zero, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d40) {
            ctx->pc = 0x206DB4u;
            goto label_206db4;
        }
    }
    ctx->pc = 0x206D48u;
label_206d48:
    // 0x206d48: 0x1055001a  beq         $v0, $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x206D48u;
    {
        const bool branch_taken_0x206d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x206d48) {
            ctx->pc = 0x206DB4u;
            goto label_206db4;
        }
    }
    ctx->pc = 0x206D50u;
    // 0x206d50: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x206d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x206d54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x206d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x206d58: 0x0  nop
    ctx->pc = 0x206d58u;
    // NOP
    // 0x206d5c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x206d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x206d60: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x206d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x206d64: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x206d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x206d68: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x206d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x206d6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206d70: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x206d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x206d74: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x206D74u;
    SET_GPR_U32(ctx, 31, 0x206D7Cu);
    ctx->pc = 0x206D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D74u;
    // 0x206d78: 0xc48c001c  lwc1        $f12, 0x1C($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x206D74u, 0x206D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D7Cu;
label_206d7c:
    // 0x206d7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206D7Cu;
    {
        const bool branch_taken_0x206d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d7c) {
            ctx->pc = 0x206DB4u;
            goto label_206db4;
        }
    }
    ctx->pc = 0x206D84u;
label_206d84:
    // 0x206d84: 0x44966000  mtc1        $s6, $f12
    ctx->pc = 0x206d84u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x206d88: 0x0  nop
    ctx->pc = 0x206d88u;
    // NOP
    // 0x206d8c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x206d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x206d90: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x206d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x206d94: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x206d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x206d98: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x206d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x206d9c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x206d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x206da0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x206da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x206da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206da8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x206da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x206dac: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x206DACu;
    SET_GPR_U32(ctx, 31, 0x206DB4u);
    ctx->pc = 0x206DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DACu;
    // 0x206db0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x206DACu, 0x206DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DB4u;
label_206db4:
    // 0x206db4: 0xc082482  jal         func_209208
    ctx->pc = 0x206DB4u;
    SET_GPR_U32(ctx, 31, 0x206DBCu);
    ctx->pc = 0x206DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DB4u;
    // 0x206db8: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209208u, 0x206DB4u, 0x206DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DBCu;
label_206dbc:
    // 0x206dbc: 0x3c11004a  lui         $s1, 0x4A
    ctx->pc = 0x206dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)74 << 16));
    // 0x206dc0: 0x26319b28  addiu       $s1, $s1, -0x64D8
    ctx->pc = 0x206dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941480));
    // 0x206dc4: 0xc080616  jal         func_201858
    ctx->pc = 0x206DC4u;
    SET_GPR_U32(ctx, 31, 0x206DCCu);
    ctx->pc = 0x206DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DC4u;
    // 0x206dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201858u, 0x206DC4u, 0x206DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DCCu;
label_206dcc:
    // 0x206dcc: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x206dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x206dd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x206dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x206dd4: 0x0  nop
    ctx->pc = 0x206dd4u;
    // NOP
    // 0x206dd8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x206dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x206ddc: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x206ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
    // 0x206de0: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x206de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
    // 0x206de4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x206de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206de8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x206de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206dec: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x206decu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x206df0: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x206DF0u;
    SET_GPR_U32(ctx, 31, 0x206DF8u);
    ctx->pc = 0x206DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DF0u;
    // 0x206df4: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x206DF0u, 0x206DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DF8u;
label_206df8:
    // 0x206df8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x206dfc: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x206dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x206e00: 0xc080618  jal         func_201860
    ctx->pc = 0x206E00u;
    SET_GPR_U32(ctx, 31, 0x206E08u);
    ctx->pc = 0x206E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E00u;
    // 0x206e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201860u, 0x206E00u, 0x206E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E08u;
label_206e08:
    // 0x206e08: 0xc081710  jal         func_205C40
    ctx->pc = 0x206E08u;
    SET_GPR_U32(ctx, 31, 0x206E10u);
    ctx->pc = 0x206E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E08u;
    // 0x206e0c: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x206E08u, 0x206E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E10u;
label_206e10:
    // 0x206e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e14: 0xc0817d4  jal         func_205F50
    ctx->pc = 0x206E14u;
    SET_GPR_U32(ctx, 31, 0x206E1Cu);
    ctx->pc = 0x206E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E14u;
    // 0x206e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x206E14u, 0x206E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E1Cu;
label_206e1c:
    // 0x206e1c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x206e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x206e20: 0xc081560  jal         func_205580
    ctx->pc = 0x206E20u;
    SET_GPR_U32(ctx, 31, 0x206E28u);
    ctx->pc = 0x206E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E20u;
    // 0x206e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x206E20u, 0x206E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E28u;
label_206e28:
    // 0x206e28: 0xc081710  jal         func_205C40
    ctx->pc = 0x206E28u;
    SET_GPR_U32(ctx, 31, 0x206E30u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x206E28u, 0x206E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E30u;
label_206e30:
    // 0x206e30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e34: 0xc0817fa  jal         func_205FE8
    ctx->pc = 0x206E34u;
    SET_GPR_U32(ctx, 31, 0x206E3Cu);
    ctx->pc = 0x206E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E34u;
    // 0x206e38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205FE8u, 0x206E34u, 0x206E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E3Cu;
label_206e3c:
    // 0x206e3c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x206e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x206e40: 0xc08156c  jal         func_2055B0
    ctx->pc = 0x206E40u;
    SET_GPR_U32(ctx, 31, 0x206E48u);
    ctx->pc = 0x206E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E40u;
    // 0x206e44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2055B0u, 0x206E40u, 0x206E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E48u;
label_206e48:
    // 0x206e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206e54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x206e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x206e58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x206e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206e5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x206e5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206e60: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x206e60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206e64: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x206e64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206e68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x206e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206e6c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x206e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x206e70: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x206e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x206e74: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x206e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206e78: 0x3e00008  jr          $ra
    ctx->pc = 0x206E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E78u;
        // 0x206e7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206E80u;
}
