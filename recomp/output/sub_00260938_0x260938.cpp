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

// Function: sub_00260938
// Address: 0x260938 - 0x260a68
void sub_00260938_0x260938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260938_0x260938");
#endif

    switch (ctx->pc) {
        case 0x260938u: goto label_260938;
        case 0x26093cu: goto label_26093c;
        case 0x260940u: goto label_260940;
        case 0x260944u: goto label_260944;
        case 0x260948u: goto label_260948;
        case 0x26094cu: goto label_26094c;
        case 0x260950u: goto label_260950;
        case 0x260954u: goto label_260954;
        case 0x260958u: goto label_260958;
        case 0x26095cu: goto label_26095c;
        case 0x260960u: goto label_260960;
        case 0x260964u: goto label_260964;
        case 0x260968u: goto label_260968;
        case 0x26096cu: goto label_26096c;
        case 0x260970u: goto label_260970;
        case 0x260974u: goto label_260974;
        case 0x260978u: goto label_260978;
        case 0x26097cu: goto label_26097c;
        case 0x260980u: goto label_260980;
        case 0x260984u: goto label_260984;
        case 0x260988u: goto label_260988;
        case 0x26098cu: goto label_26098c;
        case 0x260990u: goto label_260990;
        case 0x260994u: goto label_260994;
        case 0x260998u: goto label_260998;
        case 0x26099cu: goto label_26099c;
        case 0x2609a0u: goto label_2609a0;
        case 0x2609a4u: goto label_2609a4;
        case 0x2609a8u: goto label_2609a8;
        case 0x2609acu: goto label_2609ac;
        case 0x2609b0u: goto label_2609b0;
        case 0x2609b4u: goto label_2609b4;
        case 0x2609b8u: goto label_2609b8;
        case 0x2609bcu: goto label_2609bc;
        case 0x2609c0u: goto label_2609c0;
        case 0x2609c4u: goto label_2609c4;
        case 0x2609c8u: goto label_2609c8;
        case 0x2609ccu: goto label_2609cc;
        case 0x2609d0u: goto label_2609d0;
        case 0x2609d4u: goto label_2609d4;
        case 0x2609d8u: goto label_2609d8;
        case 0x2609dcu: goto label_2609dc;
        case 0x2609e0u: goto label_2609e0;
        case 0x2609e4u: goto label_2609e4;
        case 0x2609e8u: goto label_2609e8;
        case 0x2609ecu: goto label_2609ec;
        case 0x2609f0u: goto label_2609f0;
        case 0x2609f4u: goto label_2609f4;
        case 0x2609f8u: goto label_2609f8;
        case 0x2609fcu: goto label_2609fc;
        case 0x260a00u: goto label_260a00;
        case 0x260a04u: goto label_260a04;
        case 0x260a08u: goto label_260a08;
        case 0x260a0cu: goto label_260a0c;
        case 0x260a10u: goto label_260a10;
        case 0x260a14u: goto label_260a14;
        case 0x260a18u: goto label_260a18;
        case 0x260a1cu: goto label_260a1c;
        case 0x260a20u: goto label_260a20;
        case 0x260a24u: goto label_260a24;
        case 0x260a28u: goto label_260a28;
        case 0x260a2cu: goto label_260a2c;
        case 0x260a30u: goto label_260a30;
        case 0x260a34u: goto label_260a34;
        case 0x260a38u: goto label_260a38;
        case 0x260a3cu: goto label_260a3c;
        case 0x260a40u: goto label_260a40;
        case 0x260a44u: goto label_260a44;
        case 0x260a48u: goto label_260a48;
        case 0x260a4cu: goto label_260a4c;
        case 0x260a50u: goto label_260a50;
        case 0x260a54u: goto label_260a54;
        case 0x260a58u: goto label_260a58;
        case 0x260a5cu: goto label_260a5c;
        case 0x260a60u: goto label_260a60;
        case 0x260a64u: goto label_260a64;
        default: break;
    }

    ctx->pc = 0x260938u;

label_260938:
    // 0x260938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26093c:
    // 0x26093c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_260940:
    // 0x260940: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x260940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_260944:
    // 0x260944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260948:
    // 0x260948: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x260948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_26094c:
    // 0x26094c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26094cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_260950:
    // 0x260950: 0xc6010240  lwc1        $f1, 0x240($s0)
    ctx->pc = 0x260950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260954:
    // 0x260954: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x260954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_260958:
    // 0x260958: 0x0  nop
    ctx->pc = 0x260958u;
    // NOP
label_26095c:
    // 0x26095c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_260960:
    if (ctx->pc == 0x260960u) {
        ctx->pc = 0x260960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26095Cu;
        // 0x260960: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260964u;
        goto label_260964;
    }
    ctx->pc = 0x26095Cu;
    {
        const bool branch_taken_0x26095c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26095Cu;
        // 0x260960: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26095c) {
            ctx->pc = 0x260974u;
            goto label_260974;
        }
    }
    ctx->pc = 0x260964u;
label_260964:
    // 0x260964: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x260964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260968:
    // 0x260968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26096c:
    // 0x26096c: 0x10000036  b           . + 4 + (0x36 << 2)
label_260970:
    if (ctx->pc == 0x260970u) {
        ctx->pc = 0x260970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26096Cu;
        // 0x260970: 0xe6000240  swc1        $f0, 0x240($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x260974u;
        goto label_260974;
    }
    ctx->pc = 0x26096Cu;
    {
        const bool branch_taken_0x26096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26096Cu;
        // 0x260970: 0xe6000240  swc1        $f0, 0x240($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26096c) {
            ctx->pc = 0x260A48u;
            goto label_260a48;
        }
    }
    ctx->pc = 0x260974u;
label_260974:
    // 0x260974: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x260974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_260978:
    // 0x260978: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x260978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_26097c:
    // 0x26097c: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_260980:
    if (ctx->pc == 0x260980u) {
        ctx->pc = 0x260984u;
        goto label_260984;
    }
    ctx->pc = 0x26097Cu;
    {
        const bool branch_taken_0x26097c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26097c) {
            ctx->pc = 0x260A48u;
            goto label_260a48;
        }
    }
    ctx->pc = 0x260984u;
label_260984:
    // 0x260984: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x260984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_260988:
    // 0x260988: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
label_26098c:
    if (ctx->pc == 0x26098Cu) {
        ctx->pc = 0x260990u;
        goto label_260990;
    }
    ctx->pc = 0x260988u;
    {
        const bool branch_taken_0x260988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x260988) {
            ctx->pc = 0x260A48u;
            goto label_260a48;
        }
    }
    ctx->pc = 0x260990u;
label_260990:
    // 0x260990: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x260990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_260994:
    // 0x260994: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x260994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_260998:
    // 0x260998: 0x40f809  jalr        $v0
label_26099c:
    if (ctx->pc == 0x26099Cu) {
        ctx->pc = 0x2609A0u;
        goto label_2609a0;
    }
    ctx->pc = 0x260998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2609A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260998u, 0x2609A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2609A0u;
label_2609a0:
    // 0x2609a0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2609a4:
    if (ctx->pc == 0x2609A4u) {
        ctx->pc = 0x2609A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609A0u;
        // 0x2609a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2609A8u;
        goto label_2609a8;
    }
    ctx->pc = 0x2609A0u;
    {
        const bool branch_taken_0x2609a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609A0u;
        // 0x2609a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609a0) {
            ctx->pc = 0x260A48u;
            goto label_260a48;
        }
    }
    ctx->pc = 0x2609A8u;
label_2609a8:
    // 0x2609a8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2609ac:
    // 0x2609ac: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2609acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_2609b0:
    // 0x2609b0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2609b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2609b4:
    // 0x2609b4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2609b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2609b8:
    // 0x2609b8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2609b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2609bc:
    // 0x2609bc: 0x40f809  jalr        $v0
label_2609c0:
    if (ctx->pc == 0x2609C0u) {
        ctx->pc = 0x2609C4u;
        goto label_2609c4;
    }
    ctx->pc = 0x2609BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2609C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2609BCu, 0x2609C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2609C4u;
label_2609c4:
    // 0x2609c4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2609c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2609c8:
    // 0x2609c8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2609c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2609cc:
    // 0x2609cc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2609ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2609d0:
    // 0x2609d0: 0x40f809  jalr        $v0
label_2609d4:
    if (ctx->pc == 0x2609D4u) {
        ctx->pc = 0x2609D8u;
        goto label_2609d8;
    }
    ctx->pc = 0x2609D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2609D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2609D0u, 0x2609D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2609D8u;
label_2609d8:
    // 0x2609d8: 0x8e060104  lw          $a2, 0x104($s0)
    ctx->pc = 0x2609d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2609dc:
    // 0x2609dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2609dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2609e0:
    // 0x2609e0: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2609e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2609e4:
    // 0x2609e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2609e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2609e8:
    // 0x2609e8: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2609e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2609ec:
    // 0x2609ec: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2609ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2609f0:
    // 0x2609f0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2609f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2609f4:
    // 0x2609f4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2609f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2609f8:
    // 0x2609f8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2609f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2609fc:
    // 0x2609fc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2609fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260a00:
    // 0x260a00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x260a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_260a04:
    // 0x260a04: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x260a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_260a08:
    // 0x260a08: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x260a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_260a0c:
    // 0x260a0c: 0xc4610310  lwc1        $f1, 0x310($v1)
    ctx->pc = 0x260a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_260a10:
    // 0x260a10: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x260a10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_260a14:
    // 0x260a14: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x260a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_260a18:
    // 0x260a18: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x260a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_260a1c:
    // 0x260a1c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x260a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_260a20:
    // 0x260a20: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x260a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_260a24:
    // 0x260a24: 0xc0b1520  jal         func_2C5480
label_260a28:
    if (ctx->pc == 0x260A28u) {
        ctx->pc = 0x260A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A24u;
        // 0x260a28: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A2Cu;
        goto label_260a2c;
    }
    ctx->pc = 0x260A24u;
    SET_GPR_U32(ctx, 31, 0x260A2Cu);
    ctx->pc = 0x260A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A24u;
    // 0x260a28: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5480u, 0x260A24u, 0x260A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A2Cu;
label_260a2c:
    // 0x260a2c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x260a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_260a30:
    // 0x260a30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260a34:
    // 0x260a34: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x260a34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_260a38:
    // 0x260a38: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x260a38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_260a3c:
    // 0x260a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260a40:
    // 0x260a40: 0xc0cda26  jal         func_336898
label_260a44:
    if (ctx->pc == 0x260A44u) {
        ctx->pc = 0x260A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A40u;
        // 0x260a44: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A48u;
        goto label_260a48;
    }
    ctx->pc = 0x260A40u;
    SET_GPR_U32(ctx, 31, 0x260A48u);
    ctx->pc = 0x260A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A40u;
    // 0x260a44: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x260A40u, 0x260A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A48u;
label_260a48:
    // 0x260a48: 0xc084048  jal         func_210120
label_260a4c:
    if (ctx->pc == 0x260A4Cu) {
        ctx->pc = 0x260A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A48u;
        // 0x260a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A50u;
        goto label_260a50;
    }
    ctx->pc = 0x260A48u;
    SET_GPR_U32(ctx, 31, 0x260A50u);
    ctx->pc = 0x260A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A48u;
    // 0x260a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210120u, 0x260A48u, 0x260A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A50u;
label_260a50:
    // 0x260a50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x260a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260a54:
    // 0x260a54: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x260a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_260a58:
    // 0x260a58: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x260a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_260a5c:
    // 0x260a5c: 0x3e00008  jr          $ra
label_260a60:
    if (ctx->pc == 0x260A60u) {
        ctx->pc = 0x260A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A5Cu;
        // 0x260a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A64u;
        goto label_260a64;
    }
    ctx->pc = 0x260A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A5Cu;
        // 0x260a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260A64u;
label_260a64:
    // 0x260a64: 0x0  nop
    ctx->pc = 0x260a64u;
    // NOP
    ctx->pc = 0x260a68u;
}
