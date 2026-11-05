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

// Function: sub_00106B30
// Address: 0x106b30 - 0x106e28
void sub_00106B30_0x106b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106B30_0x106b30");
#endif

    switch (ctx->pc) {
        case 0x106b7cu: goto label_106b7c;
        case 0x106be0u: goto label_106be0;
        case 0x106bf0u: goto label_106bf0;
        case 0x106c08u: goto label_106c08;
        case 0x106c30u: goto label_106c30;
        case 0x106c78u: goto label_106c78;
        case 0x106c84u: goto label_106c84;
        case 0x106d1cu: goto label_106d1c;
        case 0x106d44u: goto label_106d44;
        case 0x106d60u: goto label_106d60;
        case 0x106d8cu: goto label_106d8c;
        default: break;
    }

    ctx->pc = 0x106b30u;

    // 0x106b30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x106b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x106b34: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x106b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x106b38: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x106b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x106b3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x106b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b40: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x106b40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b44: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x106b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x106b48: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x106b48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x106b4c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x106b4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x106b50: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x106b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x106b54: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x106b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x106b58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x106b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106b5c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x106b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x106b60: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x106b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x106b64: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x106b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x106b68: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x106b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x106b6c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x106b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x106b70: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x106b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x106b74: 0xc0f6254  jal         func_3D8950
    ctx->pc = 0x106B74u;
    SET_GPR_U32(ctx, 31, 0x106B7Cu);
    ctx->pc = 0x106B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B74u;
    // 0x106b78: 0x4614a542  mul.s       $f21, $f20, $f20 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8950u, 0x106B74u, 0x106B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B7Cu;
label_106b7c:
    // 0x106b7c: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x106b7cu;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
    // 0x106b80: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x106b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x106b84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x106b84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x106b88: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x106b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x106b8c: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x106b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106b90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106b94: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x106b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106b98: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x106b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106b9c: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x106b9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x106ba0: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x106ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106ba4: 0xc6c3000c  lwc1        $f3, 0xC($s6)
    ctx->pc = 0x106ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106ba8: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x106ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x106bac: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x106bacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x106bb0: 0x46140140  add.s       $f5, $f0, $f20
    ctx->pc = 0x106bb0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x106bb4: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x106bb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x106bb8: 0x46140900  add.s       $f4, $f1, $f20
    ctx->pc = 0x106bb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x106bbc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x106bbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x106bc0: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x106bc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x106bc4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x106bc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x106bc8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x106bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x106bcc: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x106bccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x106bd0: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x106bd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x106bd4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x106bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x106bd8: 0xc041b8a  jal         func_106E28
    ctx->pc = 0x106BD8u;
    SET_GPR_U32(ctx, 31, 0x106BE0u);
    ctx->pc = 0x106BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BD8u;
    // 0x106bdc: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E28u, 0x106BD8u, 0x106BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BE0u;
label_106be0:
    // 0x106be0: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x106be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x106be4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x106be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x106be8: 0xc041b8a  jal         func_106E28
    ctx->pc = 0x106BE8u;
    SET_GPR_U32(ctx, 31, 0x106BF0u);
    ctx->pc = 0x106BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BE8u;
    // 0x106bec: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E28u, 0x106BE8u, 0x106BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BF0u;
label_106bf0:
    // 0x106bf0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x106bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106bf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x106bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x106bf8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x106bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x106bfc: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x106BFCu;
    {
        const bool branch_taken_0x106bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BFCu;
        // 0x106c00: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bfc) {
            ctx->pc = 0x106DF0u;
            goto label_106df0;
        }
    }
    ctx->pc = 0x106C04u;
    // 0x106c04: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x106c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_106c08:
    // 0x106c08: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x106c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x106c0c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x106c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x106c10: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x106c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x106c14: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x106c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x106c18: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x106C18u;
    {
        const bool branch_taken_0x106c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C18u;
        // 0x106c1c: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c18) {
            ctx->pc = 0x106DDCu;
            goto label_106ddc;
        }
    }
    ctx->pc = 0x106C20u;
    // 0x106c20: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x106c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x106c24: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x106c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x106c28: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x106c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x106c2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x106c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_106c30:
    // 0x106c30: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x106c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x106c34: 0x24632dd0  addiu       $v1, $v1, 0x2DD0
    ctx->pc = 0x106c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11728));
    // 0x106c38: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x106c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x106c3c: 0x600013  mtlo        $v1
    ctx->pc = 0x106c3cu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x106c40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x106c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c44: 0x70821000  madd        $v0, $a0, $v0
    ctx->pc = 0x106c44u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x106c48: 0xc2a021  addu        $s4, $a2, $v0
    ctx->pc = 0x106c48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x106c4c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x106c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x106c50: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x106c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x106c54: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x106C54u;
    {
        const bool branch_taken_0x106c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x106C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C54u;
        // 0x106c58: 0xae830010  sw          $v1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c54) {
            ctx->pc = 0x106C60u;
            goto label_106c60;
        }
    }
    ctx->pc = 0x106C5Cu;
    // 0x106c5c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x106c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_106c60:
    // 0x106c60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x106c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106c64: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
    ctx->pc = 0x106C64u;
    {
        const bool branch_taken_0x106c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C64u;
        // 0x106c68: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c64) {
            ctx->pc = 0x106DC4u;
            goto label_106dc4;
        }
    }
    ctx->pc = 0x106C6Cu;
    // 0x106c6c: 0x27be0044  addiu       $fp, $sp, 0x44
    ctx->pc = 0x106c6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x106c70: 0x27b70048  addiu       $s7, $sp, 0x48
    ctx->pc = 0x106c70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x106c74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x106c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_106c78:
    // 0x106c78: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x106c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c7c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x106C7Cu;
    SET_GPR_U32(ctx, 31, 0x106C84u);
    ctx->pc = 0x106C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C7Cu;
    // 0x106c80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x106C7Cu, 0x106C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C84u;
label_106c84:
    // 0x106c84: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x106c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x106c88: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x106c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106c8c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x106c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106c90: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x106c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106c94: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x106c94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x106c98: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x106c98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x106c9c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x106c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x106ca0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x106ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106ca4: 0x0  nop
    ctx->pc = 0x106ca4u;
    // NOP
    // 0x106ca8: 0x4502003d  bc1fl       . + 4 + (0x3D << 2)
    ctx->pc = 0x106CA8u;
    {
        const bool branch_taken_0x106ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106ca8) {
            ctx->pc = 0x106CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106CA8u;
            // 0x106cac: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106DA0u;
            goto label_106da0;
        }
    }
    ctx->pc = 0x106CB0u;
    // 0x106cb0: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x106CB0u;
    {
        const bool branch_taken_0x106cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CB0u;
        // 0x106cb4: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cb0) {
            ctx->pc = 0x106D9Cu;
            goto label_106d9c;
        }
    }
    ctx->pc = 0x106CB8u;
    // 0x106cb8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x106cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x106cbc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x106cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106cc0: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106CC0u;
    {
        const bool branch_taken_0x106cc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x106CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CC0u;
        // 0x106cc4: 0x27b50040  addiu       $s5, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cc0) {
            ctx->pc = 0x106CE0u;
            goto label_106ce0;
        }
    }
    ctx->pc = 0x106CC8u;
    // 0x106cc8: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106CC8u;
    {
        const bool branch_taken_0x106cc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x106cc8) {
            ctx->pc = 0x106CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106CC8u;
            // 0x106ccc: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106CD0u;
            goto label_106cd0;
        }
    }
    ctx->pc = 0x106CD0u;
label_106cd0:
    // 0x106cd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x106cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106cd4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x106cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x106cd8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x106CD8u;
    {
        const bool branch_taken_0x106cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CD8u;
        // 0x106cdc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cd8) {
            ctx->pc = 0x106D9Cu;
            goto label_106d9c;
        }
    }
    ctx->pc = 0x106CE0u;
label_106ce0:
    // 0x106ce0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x106ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106ce8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x106ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x106cec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x106cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106cf0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x106cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x106cf4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x106cf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x106cf8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x106cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x106cfc: 0x3c3200b  movn        $a0, $fp, $v1
    ctx->pc = 0x106cfcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 30));
    // 0x106d00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106d04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x106d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106d08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106D08u;
    {
        const bool branch_taken_0x106d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D08u;
        // 0x106d0c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d08) {
            ctx->pc = 0x106D24u;
            goto label_106d24;
        }
    }
    ctx->pc = 0x106D10u;
    // 0x106d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d14: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x106D14u;
    SET_GPR_U32(ctx, 31, 0x106D1Cu);
    ctx->pc = 0x106D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D14u;
    // 0x106d18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x106D14u, 0x106D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D1Cu;
label_106d1c:
    // 0x106d1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x106D1Cu;
    {
        const bool branch_taken_0x106d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D1Cu;
        // 0x106d20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d1c) {
            ctx->pc = 0x106D2Cu;
            goto label_106d2c;
        }
    }
    ctx->pc = 0x106D24u;
label_106d24:
    // 0x106d24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x106d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x106d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106d2c:
    // 0x106d2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x106d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106d30: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106D30u;
    {
        const bool branch_taken_0x106d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x106D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D30u;
        // 0x106d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d30) {
            ctx->pc = 0x106D4Cu;
            goto label_106d4c;
        }
    }
    ctx->pc = 0x106D38u;
    // 0x106d38: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x106d38u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x106d3c: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x106D3Cu;
    SET_GPR_U32(ctx, 31, 0x106D44u);
    ctx->pc = 0x106D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D3Cu;
    // 0x106d40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x106D3Cu, 0x106D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D44u;
label_106d44:
    // 0x106d44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106D44u;
    {
        const bool branch_taken_0x106d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D44u;
        // 0x106d48: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d44) {
            ctx->pc = 0x106D50u;
            goto label_106d50;
        }
    }
    ctx->pc = 0x106D4Cu;
label_106d4c:
    // 0x106d4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106d50:
    // 0x106d50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x106d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x106d54: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106D54u;
    {
        const bool branch_taken_0x106d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D54u;
        // 0x106d58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d54) {
            ctx->pc = 0x106D78u;
            goto label_106d78;
        }
    }
    ctx->pc = 0x106D5Cu;
    // 0x106d5c: 0x0  nop
    ctx->pc = 0x106d5cu;
    // NOP
label_106d60:
    // 0x106d60: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x106d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x106d64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x106d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x106d68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x106d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x106d6c: 0x0  nop
    ctx->pc = 0x106d6cu;
    // NOP
    // 0x106d70: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x106D70u;
    {
        const bool branch_taken_0x106d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x106D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D70u;
        // 0x106d74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d70) {
            ctx->pc = 0x106D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106d60;
        }
    }
    ctx->pc = 0x106D78u;
label_106d78:
    // 0x106d78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106d7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106D7Cu;
    {
        const bool branch_taken_0x106d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D7Cu;
        // 0x106d80: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d7c) {
            ctx->pc = 0x106D90u;
            goto label_106d90;
        }
    }
    ctx->pc = 0x106D84u;
    // 0x106d84: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x106D84u;
    SET_GPR_U32(ctx, 31, 0x106D8Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x106D84u, 0x106D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D8Cu;
label_106d8c:
    // 0x106d8c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x106d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_106d90:
    // 0x106d90: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x106d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x106d94: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x106d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x106d98: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x106d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_106d9c:
    // 0x106d9c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x106d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_106da0:
    // 0x106da0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x106da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x106da4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106DA4u;
    {
        const bool branch_taken_0x106da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x106DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DA4u;
        // 0x106da8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106da4) {
            ctx->pc = 0x106DBCu;
            goto label_106dbc;
        }
    }
    ctx->pc = 0x106DACu;
    // 0x106dac: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x106dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x106db0: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x106DB0u;
    {
        const bool branch_taken_0x106db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x106DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DB0u;
        // 0x106db4: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106db0) {
            ctx->pc = 0x106DBCu;
            goto label_106dbc;
        }
    }
    ctx->pc = 0x106DB8u;
    // 0x106db8: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x106db8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_106dbc:
    // 0x106dbc: 0x1620ffae  bnez        $s1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x106DBCu;
    {
        const bool branch_taken_0x106dbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x106DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DBCu;
        // 0x106dc0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dbc) {
            ctx->pc = 0x106C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106c78;
        }
    }
    ctx->pc = 0x106DC4u;
label_106dc4:
    // 0x106dc4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x106dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x106dc8: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x106dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x106dcc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x106dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x106dd0: 0x1040ff97  beqz        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x106DD0u;
    {
        const bool branch_taken_0x106dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DD0u;
        // 0x106dd4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dd0) {
            ctx->pc = 0x106C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106c30;
        }
    }
    ctx->pc = 0x106DD8u;
    // 0x106dd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x106dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_106ddc:
    // 0x106ddc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x106ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106de0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x106de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x106de4: 0x1040ff88  beqz        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x106DE4u;
    {
        const bool branch_taken_0x106de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DE4u;
        // 0x106de8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106de4) {
            ctx->pc = 0x106C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106c08;
        }
    }
    ctx->pc = 0x106DECu;
    // 0x106dec: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x106decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_106df0:
    // 0x106df0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x106df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x106df4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x106df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106df8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x106df8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x106dfc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x106dfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106e00: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x106e00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x106e04: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x106e04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106e08: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x106e08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x106e0c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x106e0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106e10: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x106e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x106e14: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x106e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x106e18: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x106e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x106e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x106E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E1Cu;
        // 0x106e20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106E24u;
    // 0x106e24: 0x0  nop
    ctx->pc = 0x106e24u;
    // NOP
    ctx->pc = 0x106e28u;
}
