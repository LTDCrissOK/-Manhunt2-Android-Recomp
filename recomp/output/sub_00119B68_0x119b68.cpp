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

// Function: sub_00119B68
// Address: 0x119b68 - 0x11a140
void sub_00119B68_0x119b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119B68_0x119b68");
#endif

    switch (ctx->pc) {
        case 0x119be4u: goto label_119be4;
        case 0x119c00u: goto label_119c00;
        case 0x119c84u: goto label_119c84;
        case 0x119cacu: goto label_119cac;
        case 0x119d00u: goto label_119d00;
        case 0x119de0u: goto label_119de0;
        case 0x119e90u: goto label_119e90;
        case 0x119f5cu: goto label_119f5c;
        case 0x119fc0u: goto label_119fc0;
        case 0x11a040u: goto label_11a040;
        default: break;
    }

    ctx->pc = 0x119b68u;

    // 0x119b68: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x119b6c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x119b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x119b70: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x119b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x119b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b78: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x119b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x119b7c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x119b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x119b80: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x119b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x119b84: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x119b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x119b88: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x119b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x119b8c: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x119b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x119b90: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x119b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x119b94: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x119b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x119b98: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x119b98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x119b9c: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x119b9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x119ba0: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x119ba0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x119ba4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x119ba4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x119ba8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x119ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x119bac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x119bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x119bb0: 0x92021212  lbu         $v0, 0x1212($s0)
    ctx->pc = 0x119bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
    // 0x119bb4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x119BB4u;
    {
        const bool branch_taken_0x119bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BB4u;
        // 0x119bb8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bb4) {
            ctx->pc = 0x119BECu;
            goto label_119bec;
        }
    }
    ctx->pc = 0x119BBCu;
    // 0x119bbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x119bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119bc0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x119bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x119bc4: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x119bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x119bc8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x119bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x119bcc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x119bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x119bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bd4: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x119bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x119bd8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x119bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x119bdc: 0xc046ce2  jal         func_11B388
    ctx->pc = 0x119BDCu;
    SET_GPR_U32(ctx, 31, 0x119BE4u);
    ctx->pc = 0x119BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BDCu;
    // 0x119be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B388u, 0x119BDCu, 0x119BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BE4u;
label_119be4:
    // 0x119be4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x119BE4u;
    {
        const bool branch_taken_0x119be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119be4) {
            ctx->pc = 0x119BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119BE4u;
            // 0x119be8: 0xae111218  sw          $s1, 0x1218($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4632), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119BF4u;
            goto label_119bf4;
        }
    }
    ctx->pc = 0x119BECu;
label_119bec:
    // 0x119bec: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x119BECu;
    {
        const bool branch_taken_0x119bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BECu;
        // 0x119bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bec) {
            ctx->pc = 0x11A0F8u;
            goto label_11a0f8;
        }
    }
    ctx->pc = 0x119BF4u;
label_119bf4:
    // 0x119bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bf8: 0xc046cd8  jal         func_11B360
    ctx->pc = 0x119BF8u;
    SET_GPR_U32(ctx, 31, 0x119C00u);
    ctx->pc = 0x119BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BF8u;
    // 0x119bfc: 0x241e0009  addiu       $fp, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B360u, 0x119BF8u, 0x119C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C00u;
label_119c00:
    // 0x119c00: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x119c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x119c04: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x119c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x119c08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119c0c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x119c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x119c10: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x119c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x119c14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x119C14u;
    {
        const bool branch_taken_0x119c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119c14) {
            ctx->pc = 0x119C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119C14u;
            // 0x119c18: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119C24u;
            goto label_119c24;
        }
    }
    ctx->pc = 0x119C1Cu;
    // 0x119c1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x119C1Cu;
    {
        const bool branch_taken_0x119c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C1Cu;
        // 0x119c20: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c1c) {
            ctx->pc = 0x119C30u;
            goto label_119c30;
        }
    }
    ctx->pc = 0x119C24u;
label_119c24:
    // 0x119c24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119c28: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x119c2c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x119c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_119c30:
    // 0x119c30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x119c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x119c34: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x119c38: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x119c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119c3c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x119c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c40: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x119c44: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x119c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x119c48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x119c4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x119c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x119c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c54: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x119c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119c58: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x119c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119c5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x119c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x119c60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119c64: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x119c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x119c68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x119c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x119c6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x119c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119c70: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x119c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x119c74: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x119c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119c78: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x119c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x119c7c: 0xc046d3c  jal         func_11B4F0
    ctx->pc = 0x119C7Cu;
    SET_GPR_U32(ctx, 31, 0x119C84u);
    ctx->pc = 0x119C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C7Cu;
    // 0x119c80: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4F0u, 0x119C7Cu, 0x119C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C84u;
label_119c84:
    // 0x119c84: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x119c84u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x119c88: 0x4614b032  c.eq.s      $f22, $f20
    ctx->pc = 0x119c88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119c8c: 0x0  nop
    ctx->pc = 0x119c8cu;
    // NOP
    // 0x119c90: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x119C90u;
    {
        const bool branch_taken_0x119c90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119c90) {
            ctx->pc = 0x119C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119C90u;
            // 0x119c94: 0x92021212  lbu         $v0, 0x1212($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119CE0u;
            goto label_119ce0;
        }
    }
    ctx->pc = 0x119C98u;
    // 0x119c98: 0x8e021218  lw          $v0, 0x1218($s0)
    ctx->pc = 0x119c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4632)));
    // 0x119c9c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x119C9Cu;
    {
        const bool branch_taken_0x119c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C9Cu;
        // 0x119ca0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c9c) {
            ctx->pc = 0x119CDCu;
            goto label_119cdc;
        }
    }
    ctx->pc = 0x119CA4u;
    // 0x119ca4: 0xc046d94  jal         func_11B650
    ctx->pc = 0x119CA4u;
    SET_GPR_U32(ctx, 31, 0x119CACu);
    ctx->pc = 0x119CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CA4u;
    // 0x119ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B650u, 0x119CA4u, 0x119CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CACu;
label_119cac:
    // 0x119cac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x119cacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cb0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x119cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x119cb4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119CB4u;
    {
        const bool branch_taken_0x119cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x119CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CB4u;
        // 0x119cb8: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cb4) {
            ctx->pc = 0x119CDCu;
            goto label_119cdc;
        }
    }
    ctx->pc = 0x119CBCu;
    // 0x119cbc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119CBCu;
    {
        const bool branch_taken_0x119cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CBCu;
        // 0x119cc0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cbc) {
            ctx->pc = 0x119CCCu;
            goto label_119ccc;
        }
    }
    ctx->pc = 0x119CC4u;
    // 0x119cc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119CC4u;
    {
        const bool branch_taken_0x119cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CC4u;
        // 0x119cc8: 0x92021212  lbu         $v0, 0x1212($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cc4) {
            ctx->pc = 0x119CE0u;
            goto label_119ce0;
        }
    }
    ctx->pc = 0x119CCCu;
label_119ccc:
    // 0x119ccc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x119cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x119cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119cd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x119cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119cd8: 0xc4560004  lwc1        $f22, 0x4($v0)
    ctx->pc = 0x119cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_119cdc:
    // 0x119cdc: 0x92021212  lbu         $v0, 0x1212($s0)
    ctx->pc = 0x119cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
label_119ce0:
    // 0x119ce0: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x119CE0u;
    {
        const bool branch_taken_0x119ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CE0u;
        // 0x119ce4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ce0) {
            ctx->pc = 0x11A0ECu;
            goto label_11a0ec;
        }
    }
    ctx->pc = 0x119CE8u;
    // 0x119ce8: 0x260301d0  addiu       $v1, $s0, 0x1D0
    ctx->pc = 0x119ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x119cec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x119cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x119cf0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x119cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x119cf4: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x119cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x119cf8: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x119cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x119cfc: 0x92021210  lbu         $v0, 0x1210($s0)
    ctx->pc = 0x119cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4624)));
label_119d00:
    // 0x119d00: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x119d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x119d04: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x119d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x119d08: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x119d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x119d0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x119d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119d10: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x119d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119d14: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x119d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x119d18: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x119D18u;
    {
        const bool branch_taken_0x119d18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D18u;
        // 0x119d1c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d18) {
            ctx->pc = 0x119D2Cu;
            goto label_119d2c;
        }
    }
    ctx->pc = 0x119D20u;
    // 0x119d20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x119d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x119d24: 0x104400ec  beq         $v0, $a0, . + 4 + (0xEC << 2)
    ctx->pc = 0x119D24u;
    {
        const bool branch_taken_0x119d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x119D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D24u;
        // 0x119d28: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d24) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x119D2Cu;
label_119d2c:
    // 0x119d2c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x119d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x119d30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x119d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x119d34: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x119d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119d38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x119d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119d3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x119d3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x119d40: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x119d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x119d44: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x119d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x119d48: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x119d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x119d4c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x119d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119d50: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x119d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x119d54: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x119d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119d58: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x119d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119d5c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x119d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119d60: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x119d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x119d64: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x119d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x119d68: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x119d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x119d6c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x119d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x119d70: 0x202b021  addu        $s6, $s0, $v0
    ctx->pc = 0x119d70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119d74: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x119d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x119d78: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x119d78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x119d7c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x119d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119d80: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x119d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119d84: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x119d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x119d88: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x119d88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x119d8c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x119d8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x119d90: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x119d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x119d94: 0x46010044  c1          0x10044
    ctx->pc = 0x119d94u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x119d98: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x119d98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d9c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x119D9Cu;
    {
        const bool branch_taken_0x119d9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D9Cu;
        // 0x119da0: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d9c) {
            ctx->pc = 0x119DD0u;
            goto label_119dd0;
        }
    }
    ctx->pc = 0x119DA4u;
    // 0x119da4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x119da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x119da8: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x119DA8u;
    {
        const bool branch_taken_0x119da8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x119DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DA8u;
        // 0x119dac: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119da8) {
            ctx->pc = 0x119DB4u;
            goto label_119db4;
        }
    }
    ctx->pc = 0x119DB0u;
    // 0x119db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x119db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_119db4:
    // 0x119db4: 0x0  nop
    ctx->pc = 0x119db4u;
    // NOP
    // 0x119db8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x119db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119dbc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x119dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x119dc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x119dc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x119dc4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x119dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x119dc8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x119DC8u;
    {
        const bool branch_taken_0x119dc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x119dc8) {
            ctx->pc = 0x119DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119DC8u;
            // 0x119dcc: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x119DD0u;
            goto label_119dd0;
        }
    }
    ctx->pc = 0x119DD0u;
label_119dd0:
    // 0x119dd0: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x119dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x119dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dd8: 0xc046dac  jal         func_11B6B0
    ctx->pc = 0x119DD8u;
    SET_GPR_U32(ctx, 31, 0x119DE0u);
    ctx->pc = 0x119DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119DD8u;
    // 0x119ddc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B6B0u, 0x119DD8u, 0x119DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DE0u;
label_119de0:
    // 0x119de0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x119de0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x119de4: 0x4618a032  c.eq.s      $f20, $f24
    ctx->pc = 0x119de4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119de8: 0x0  nop
    ctx->pc = 0x119de8u;
    // NOP
    // 0x119dec: 0x450100ba  bc1t        . + 4 + (0xBA << 2)
    ctx->pc = 0x119DECu;
    {
        const bool branch_taken_0x119dec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x119DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DECu;
        // 0x119df0: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119dec) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x119DF4u;
    // 0x119df4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x119df8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x119df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x119dfc: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119DFCu;
    {
        const bool branch_taken_0x119dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x119dfc) {
            ctx->pc = 0x119E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119DFCu;
            // 0x119e00: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119E24u;
            goto label_119e24;
        }
    }
    ctx->pc = 0x119E04u;
    // 0x119e04: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x119e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x119e08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119e0c: 0x0  nop
    ctx->pc = 0x119e0cu;
    // NOP
    // 0x119e10: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x119e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119e14: 0x0  nop
    ctx->pc = 0x119e14u;
    // NOP
    // 0x119e18: 0x450300b0  bc1tl       . + 4 + (0xB0 << 2)
    ctx->pc = 0x119E18u;
    {
        const bool branch_taken_0x119e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119e18) {
            ctx->pc = 0x119E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119E18u;
            // 0x119e1c: 0x92021212  lbu         $v0, 0x1212($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A0DCu;
            goto label_11a0dc;
        }
    }
    ctx->pc = 0x119E20u;
    // 0x119e20: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x119e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_119e24:
    // 0x119e24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x119E24u;
    {
        const bool branch_taken_0x119e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119e24) {
            ctx->pc = 0x119E58u;
            goto label_119e58;
        }
    }
    ctx->pc = 0x119E2Cu;
    // 0x119e2c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x119e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x119e30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119E30u;
    {
        const bool branch_taken_0x119e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E30u;
        // 0x119e34: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e30) {
            ctx->pc = 0x119E58u;
            goto label_119e58;
        }
    }
    ctx->pc = 0x119E38u;
    // 0x119e38: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119E38u;
    {
        const bool branch_taken_0x119e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x119e38) {
            ctx->pc = 0x119E58u;
            goto label_119e58;
        }
    }
    ctx->pc = 0x119E40u;
    // 0x119e40: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x119e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119e44: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x119e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119e48: 0x0  nop
    ctx->pc = 0x119e48u;
    // NOP
    // 0x119e4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x119E4Cu;
    {
        const bool branch_taken_0x119e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E4Cu;
        // 0x119e50: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e4c) {
            ctx->pc = 0x119E58u;
            goto label_119e58;
        }
    }
    ctx->pc = 0x119E54u;
    // 0x119e54: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x119e54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_119e58:
    // 0x119e58: 0x4618b032  c.eq.s      $f22, $f24
    ctx->pc = 0x119e58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119e5c: 0x0  nop
    ctx->pc = 0x119e5cu;
    // NOP
    // 0x119e60: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x119E60u;
    {
        const bool branch_taken_0x119e60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119e60) {
            ctx->pc = 0x119E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119E60u;
            // 0x119e64: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119E84u;
            goto label_119e84;
        }
    }
    ctx->pc = 0x119E68u;
    // 0x119e68: 0x4616a001  sub.s       $f0, $f20, $f22
    ctx->pc = 0x119e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x119e6c: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x119e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119e70: 0x0  nop
    ctx->pc = 0x119e70u;
    // NOP
    // 0x119e74: 0x45010098  bc1t        . + 4 + (0x98 << 2)
    ctx->pc = 0x119E74u;
    {
        const bool branch_taken_0x119e74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x119E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E74u;
        // 0x119e78: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e74) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x119E7Cu;
    // 0x119e7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x119e7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x119e80: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x119e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_119e84:
    // 0x119e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e88: 0xc046e0e  jal         func_11B838
    ctx->pc = 0x119E88u;
    SET_GPR_U32(ctx, 31, 0x119E90u);
    ctx->pc = 0x119E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E88u;
    // 0x119e8c: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x119E88u, 0x119E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E90u;
label_119e90:
    // 0x119e90: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x119E90u;
    {
        const bool branch_taken_0x119e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119e90) {
            ctx->pc = 0x119E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119E90u;
            // 0x119e94: 0x8ed30004  lw          $s3, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119FA8u;
            goto label_119fa8;
        }
    }
    ctx->pc = 0x119E98u;
    // 0x119e98: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x119e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119e9c: 0x260501b0  addiu       $a1, $s0, 0x1B0
    ctx->pc = 0x119e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x119ea0: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x119ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x119ea4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x119ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x119ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119eac: 0x260601e0  addiu       $a2, $s0, 0x1E0
    ctx->pc = 0x119eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x119eb0: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x119eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119eb4: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x119eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x119eb8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x119eb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x119ebc: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x119ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119ec0: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x119ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119ec4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x119ec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ec8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x119ec8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x119ecc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x119eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x119ed0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x119ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x119ed4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x119ed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x119ed8: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x119ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x119edc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x119edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119ee0: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x119ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x119ee4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x119ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x119ee8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x119ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119eec: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x119eecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119ef0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x119ef0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x119ef4: 0xfa0101e0  sqc2        $vf1, 0x1E0($s0)
    ctx->pc = 0x119ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x119ef8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x119ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x119efc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x119efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119f00: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x119f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x119f04: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x119f04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x119f08: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x119f08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x119f0c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x119f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x119f10: 0x0  nop
    ctx->pc = 0x119f10u;
    // NOP
    // 0x119f14: 0x0  nop
    ctx->pc = 0x119f14u;
    // NOP
    // 0x119f18: 0x46000044  c1          0x44
    ctx->pc = 0x119f18u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x119f1c: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x119f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x119f20: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x119f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119f24: 0x0  nop
    ctx->pc = 0x119f24u;
    // NOP
    // 0x119f28: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x119F28u;
    {
        const bool branch_taken_0x119f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x119F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F28u;
        // 0x119f2c: 0xe4a10050  swc1        $f1, 0x50($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f28) {
            ctx->pc = 0x119F54u;
            goto label_119f54;
        }
    }
    ctx->pc = 0x119F30u;
    // 0x119f30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119f34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119f38: 0x0  nop
    ctx->pc = 0x119f38u;
    // NOP
    // 0x119f3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x119f3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x119f40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x119f40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x119f44: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x119f44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119f48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x119f48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x119f4c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x119f4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x119f50: 0xfa0101f0  sqc2        $vf1, 0x1F0($s0)
    ctx->pc = 0x119f50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), _mm_castps_si128(ctx->vu0_vf[1]));
label_119f54:
    // 0x119f54: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x119F54u;
    SET_GPR_U32(ctx, 31, 0x119F5Cu);
    ctx->pc = 0x119F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F54u;
    // 0x119f58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x119F54u, 0x119F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F5Cu;
label_119f5c:
    // 0x119f5c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x119F5Cu;
    {
        const bool branch_taken_0x119f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119f5c) {
            ctx->pc = 0x119F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119F5Cu;
            // 0x119f60: 0x8ed30004  lw          $s3, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119FA8u;
            goto label_119fa8;
        }
    }
    ctx->pc = 0x119F64u;
    // 0x119f64: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x119f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x119f68: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x119f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x119f6c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x119f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x119f70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119F70u;
    {
        const bool branch_taken_0x119f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F70u;
        // 0x119f74: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f70) {
            ctx->pc = 0x119F80u;
            goto label_119f80;
        }
    }
    ctx->pc = 0x119F78u;
    // 0x119f78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x119F78u;
    {
        const bool branch_taken_0x119f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F78u;
        // 0x119f7c: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f78) {
            ctx->pc = 0x119F8Cu;
            goto label_119f8c;
        }
    }
    ctx->pc = 0x119F80u;
label_119f80:
    // 0x119f80: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x119f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x119f84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119F84u;
    {
        const bool branch_taken_0x119f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119f84) {
            ctx->pc = 0x119F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119F84u;
            // 0x119f88: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x119F8Cu;
            goto label_119f8c;
        }
    }
    ctx->pc = 0x119F8Cu;
label_119f8c:
    // 0x119f8c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x119f8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x119f90: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x119f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x119f94: 0x0  nop
    ctx->pc = 0x119f94u;
    // NOP
    // 0x119f98: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
    ctx->pc = 0x119F98u;
    {
        const bool branch_taken_0x119f98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x119F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F98u;
        // 0x119f9c: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f98) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x119FA0u;
    // 0x119fa0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x119fa0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x119fa4: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x119fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_119fa8:
    // 0x119fa8: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x119fa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x119fac: 0x1274004a  beq         $s3, $s4, . + 4 + (0x4A << 2)
    ctx->pc = 0x119FACu;
    {
        const bool branch_taken_0x119fac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x119FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FACu;
        // 0x119fb0: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fac) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x119FB4u;
    // 0x119fb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x119fb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x119fb8: 0xc046d94  jal         func_11B650
    ctx->pc = 0x119FB8u;
    SET_GPR_U32(ctx, 31, 0x119FC0u);
    ctx->pc = 0x119FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FB8u;
    // 0x119fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B650u, 0x119FB8u, 0x119FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FC0u;
label_119fc0:
    // 0x119fc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x119fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fc4: 0x13d40004  beq         $fp, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x119FC4u;
    {
        const bool branch_taken_0x119fc4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 20));
        ctx->pc = 0x119FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FC4u;
        // 0x119fc8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fc4) {
            ctx->pc = 0x119FD8u;
            goto label_119fd8;
        }
    }
    ctx->pc = 0x119FCCu;
    // 0x119fcc: 0x3c6102a  slt         $v0, $fp, $a2
    ctx->pc = 0x119fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x119fd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119FD0u;
    {
        const bool branch_taken_0x119fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119fd0) {
            ctx->pc = 0x119FE0u;
            goto label_119fe0;
        }
    }
    ctx->pc = 0x119FD8u;
label_119fd8:
    // 0x119fd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x119FD8u;
    {
        const bool branch_taken_0x119fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FD8u;
        // 0x119fdc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fd8) {
            ctx->pc = 0x119FF0u;
            goto label_119ff0;
        }
    }
    ctx->pc = 0x119FE0u;
label_119fe0:
    // 0x119fe0: 0x14de0003  bne         $a2, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x119FE0u;
    {
        const bool branch_taken_0x119fe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 30));
        if (branch_taken_0x119fe0) {
            ctx->pc = 0x119FF0u;
            goto label_119ff0;
        }
    }
    ctx->pc = 0x119FE8u;
    // 0x119fe8: 0x8e021220  lw          $v0, 0x1220($s0)
    ctx->pc = 0x119fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4640)));
    // 0x119fec: 0x53882a  slt         $s1, $v0, $s3
    ctx->pc = 0x119fecu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_119ff0:
    // 0x119ff0: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x119FF0u;
    {
        const bool branch_taken_0x119ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FF0u;
        // 0x119ff4: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ff0) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x119FF8u;
    // 0x119ff8: 0x8e021218  lw          $v0, 0x1218($s0)
    ctx->pc = 0x119ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4632)));
    // 0x119ffc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x119ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a000: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11A000u;
    {
        const bool branch_taken_0x11a000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A000u;
        // 0x11a004: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a000) {
            ctx->pc = 0x11A05Cu;
            goto label_11a05c;
        }
    }
    ctx->pc = 0x11A008u;
    // 0x11a008: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x11a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x11a00c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11A00Cu;
    {
        const bool branch_taken_0x11a00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a00c) {
            ctx->pc = 0x11A05Cu;
            goto label_11a05c;
        }
    }
    ctx->pc = 0x11A014u;
    // 0x11a014: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11A014u;
    {
        const bool branch_taken_0x11a014 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x11a014) {
            ctx->pc = 0x11A05Cu;
            goto label_11a05c;
        }
    }
    ctx->pc = 0x11A01Cu;
    // 0x11a01c: 0x8e07121c  lw          $a3, 0x121C($s0)
    ctx->pc = 0x11a01cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x11a020: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x11a020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11a024: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11A024u;
    {
        const bool branch_taken_0x11a024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A024u;
        // 0x11a028: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a024) {
            ctx->pc = 0x11A05Cu;
            goto label_11a05c;
        }
    }
    ctx->pc = 0x11A02Cu;
    // 0x11a02c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x11a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11a030: 0x10c5000a  beq         $a2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x11A030u;
    {
        const bool branch_taken_0x11a030 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x11A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A030u;
        // 0x11a034: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a030) {
            ctx->pc = 0x11A05Cu;
            goto label_11a05c;
        }
    }
    ctx->pc = 0x11A038u;
    // 0x11a038: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11a03c: 0x0  nop
    ctx->pc = 0x11a03cu;
    // NOP
label_11a040:
    // 0x11a040: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x11a040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11a044: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A044u;
    {
        const bool branch_taken_0x11a044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A044u;
        // 0x11a048: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a044) {
            ctx->pc = 0x11A05Cu;
            goto label_11a05c;
        }
    }
    ctx->pc = 0x11A04Cu;
    // 0x11a04c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A04Cu;
    {
        const bool branch_taken_0x11a04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x11a04c) {
            ctx->pc = 0x11A05Cu;
            goto label_11a05c;
        }
    }
    ctx->pc = 0x11A054u;
    // 0x11a054: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A054u;
    {
        const bool branch_taken_0x11a054 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x11A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A054u;
        // 0x11a058: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a054) {
            ctx->pc = 0x11A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a040;
        }
    }
    ctx->pc = 0x11A05Cu;
label_11a05c:
    // 0x11a05c: 0x55200011  bnel        $t1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x11A05Cu;
    {
        const bool branch_taken_0x11a05c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a05c) {
            ctx->pc = 0x11A060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A05Cu;
            // 0x11a060: 0xae041220  sw          $a0, 0x1220($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4640), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A0A4u;
            goto label_11a0a4;
        }
    }
    ctx->pc = 0x11A064u;
    // 0x11a064: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11a068: 0x13c3000a  beq         $fp, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11A068u;
    {
        const bool branch_taken_0x11a068 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        ctx->pc = 0x11A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A068u;
        // 0x11a06c: 0x3c6102a  slt         $v0, $fp, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a068) {
            ctx->pc = 0x11A094u;
            goto label_11a094;
        }
    }
    ctx->pc = 0x11A070u;
    // 0x11a070: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A070u;
    {
        const bool branch_taken_0x11a070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a070) {
            ctx->pc = 0x11A074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A070u;
            // 0x11a074: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A098u;
            goto label_11a098;
        }
    }
    ctx->pc = 0x11A078u;
    // 0x11a078: 0x14de0007  bne         $a2, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A078u;
    {
        const bool branch_taken_0x11a078 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 30));
        if (branch_taken_0x11a078) {
            ctx->pc = 0x11A098u;
            goto label_11a098;
        }
    }
    ctx->pc = 0x11A080u;
    // 0x11a080: 0x8e021220  lw          $v0, 0x1220($s0)
    ctx->pc = 0x11a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4640)));
    // 0x11a084: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A084u;
    {
        const bool branch_taken_0x11a084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A084u;
        // 0x11a088: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a084) {
            ctx->pc = 0x11A094u;
            goto label_11a094;
        }
    }
    ctx->pc = 0x11A08Cu;
    // 0x11a08c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A08Cu;
    {
        const bool branch_taken_0x11a08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a08c) {
            ctx->pc = 0x11A098u;
            goto label_11a098;
        }
    }
    ctx->pc = 0x11A094u;
label_11a094:
    // 0x11a094: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x11a094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a098:
    // 0x11a098: 0x51200010  beql        $t1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A098u;
    {
        const bool branch_taken_0x11a098 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a098) {
            ctx->pc = 0x11A09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A098u;
            // 0x11a09c: 0x92021212  lbu         $v0, 0x1212($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A0DCu;
            goto label_11a0dc;
        }
    }
    ctx->pc = 0x11A0A0u;
    // 0x11a0a0: 0xae041220  sw          $a0, 0x1220($s0)
    ctx->pc = 0x11a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4640), GPR_U32(ctx, 4));
label_11a0a4:
    // 0x11a0a4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x11a0a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11a0ac: 0xae171228  sw          $s7, 0x1228($s0)
    ctx->pc = 0x11a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4648), GPR_U32(ctx, 23));
    // 0x11a0b0: 0xae021224  sw          $v0, 0x1224($s0)
    ctx->pc = 0x11a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4644), GPR_U32(ctx, 2));
    // 0x11a0b4: 0xe615122c  swc1        $f21, 0x122C($s0)
    ctx->pc = 0x11a0b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4652), bits); }
    // 0x11a0b8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x11a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x11a0bc: 0xae021230  sw          $v0, 0x1230($s0)
    ctx->pc = 0x11a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4656), GPR_U32(ctx, 2));
    // 0x11a0c0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x11a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x11a0c4: 0xae031234  sw          $v1, 0x1234($s0)
    ctx->pc = 0x11a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4660), GPR_U32(ctx, 3));
    // 0x11a0c8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x11a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x11a0cc: 0xae021238  sw          $v0, 0x1238($s0)
    ctx->pc = 0x11a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4664), GPR_U32(ctx, 2));
    // 0x11a0d0: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x11a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x11a0d4: 0xae03123c  sw          $v1, 0x123C($s0)
    ctx->pc = 0x11a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4668), GPR_U32(ctx, 3));
label_11a0d8:
    // 0x11a0d8: 0x92021212  lbu         $v0, 0x1212($s0)
    ctx->pc = 0x11a0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
label_11a0dc:
    // 0x11a0dc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x11a0dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0e0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x11a0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a0e4: 0x5440ff06  bnel        $v0, $zero, . + 4 + (-0xFA << 2)
    ctx->pc = 0x11A0E4u;
    {
        const bool branch_taken_0x11a0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a0e4) {
            ctx->pc = 0x11A0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A0E4u;
            // 0x11a0e8: 0x92021210  lbu         $v0, 0x1210($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119d00;
        }
    }
    ctx->pc = 0x11A0ECu;
label_11a0ec:
    // 0x11a0ec: 0x8e021220  lw          $v0, 0x1220($s0)
    ctx->pc = 0x11a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4640)));
    // 0x11a0f0: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x11a0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x11a0f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11a0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11a0f8:
    // 0x11a0f8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11a0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a0fc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x11a0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11a100: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x11a100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a104: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x11a104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11a108: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11a108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a10c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x11a10cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11a110: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11a110u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a114: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x11a114u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11a118: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x11a118u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a11c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x11a11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11a120: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x11a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x11a124: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x11a124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11a128: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x11a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11a12c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x11a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11a130: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x11a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a134: 0x3e00008  jr          $ra
    ctx->pc = 0x11A134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A134u;
        // 0x11a138: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A13Cu;
    // 0x11a13c: 0x0  nop
    ctx->pc = 0x11a13cu;
    // NOP
    ctx->pc = 0x11a140u;
}
