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

// Function: sub_00272480
// Address: 0x272480 - 0x272630
void sub_00272480_0x272480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272480_0x272480");
#endif

    switch (ctx->pc) {
        case 0x2724f0u: goto label_2724f0;
        case 0x272590u: goto label_272590;
        case 0x2725a0u: goto label_2725a0;
        case 0x2725b0u: goto label_2725b0;
        case 0x2725c0u: goto label_2725c0;
        default: break;
    }

    ctx->pc = 0x272480u;

    // 0x272480: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x272480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x272484: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x272484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x272488: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x272488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x27248c: 0x24424778  addiu       $v0, $v0, 0x4778
    ctx->pc = 0x27248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18296));
    // 0x272490: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x272490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x272494: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x272494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272498: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x272498u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27249c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27249cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724a0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2724a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2724a4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2724a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2724a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2724a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2724ac: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2724acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2724b0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2724b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2724b4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2724b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2724b8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2724b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2724bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2724bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B477Cu));
    // 0x2724c0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2724c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2724c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2724c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2724c8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2724c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2724cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2724ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2724d0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2724d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2724d4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2724d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2724d8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2724d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2724dc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2724DCu;
    {
        const bool branch_taken_0x2724dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724DCu;
        // 0x2724e0: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724dc) {
            ctx->pc = 0x272604u;
            goto label_272604;
        }
    }
    ctx->pc = 0x2724E4u;
    // 0x2724e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2724e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2724e8: 0x24543d98  addiu       $s4, $v0, 0x3D98
    ctx->pc = 0x2724e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 15768));
    // 0x2724ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2724ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2724f0:
    // 0x2724f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2724f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2724f4: 0x920302d5  lbu         $v1, 0x2D5($s0)
    ctx->pc = 0x2724f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 725)));
    // 0x2724f8: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2724F8u;
    {
        const bool branch_taken_0x2724f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2724f8) {
            ctx->pc = 0x2725D0u;
            goto label_2725d0;
        }
    }
    ctx->pc = 0x272500u;
    // 0x272500: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x272500u;
    {
        const bool branch_taken_0x272500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x272500) {
            ctx->pc = 0x272514u;
            goto label_272514;
        }
    }
    ctx->pc = 0x272508u;
    // 0x272508: 0x920202d4  lbu         $v0, 0x2D4($s0)
    ctx->pc = 0x272508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x27250c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x27250Cu;
    {
        const bool branch_taken_0x27250c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27250Cu;
        // 0x272510: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27250c) {
            ctx->pc = 0x2725D0u;
            goto label_2725d0;
        }
    }
    ctx->pc = 0x272514u;
label_272514:
    // 0x272514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272518: 0x0  nop
    ctx->pc = 0x272518u;
    // NOP
    // 0x27251c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x27251cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272520: 0x0  nop
    ctx->pc = 0x272520u;
    // NOP
    // 0x272524: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x272524u;
    {
        const bool branch_taken_0x272524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272524) {
            ctx->pc = 0x272528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272524u;
            // 0x272528: 0xafb40038  sw          $s4, 0x38($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272540u;
            goto label_272540;
        }
    }
    ctx->pc = 0x27252Cu;
    // 0x27252c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x27252cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272530: 0x0  nop
    ctx->pc = 0x272530u;
    // NOP
    // 0x272534: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x272534u;
    {
        const bool branch_taken_0x272534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x272538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272534u;
        // 0x272538: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272534) {
            ctx->pc = 0x2725B8u;
            goto label_2725b8;
        }
    }
    ctx->pc = 0x27253Cu;
    // 0x27253c: 0xafb40038  sw          $s4, 0x38($sp)
    ctx->pc = 0x27253cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 20));
label_272540:
    // 0x272540: 0x26020230  addiu       $v0, $s0, 0x230
    ctx->pc = 0x272540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x272544: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x272544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x272548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x272548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27254c: 0xc6010230  lwc1        $f1, 0x230($s0)
    ctx->pc = 0x27254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272554: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x272554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x272558: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x272558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27255c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x272560: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x272560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272564: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x272564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x272568: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x272568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27256c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x272570: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x272570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272574: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x272574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x272578: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x272578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x27257c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x27257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272580: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x272580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x272584: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x272584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x272588: 0xc0b4bc6  jal         func_2D2F18
    ctx->pc = 0x272588u;
    SET_GPR_U32(ctx, 31, 0x272590u);
    ctx->pc = 0x27258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272588u;
    // 0x27258c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F18u, 0x272588u, 0x272590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272590u;
label_272590:
    // 0x272590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272590u;
    {
        const bool branch_taken_0x272590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272590u;
        // 0x272594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272590) {
            ctx->pc = 0x2725A8u;
            goto label_2725a8;
        }
    }
    ctx->pc = 0x272598u;
    // 0x272598: 0xc0b4bba  jal         func_2D2EE8
    ctx->pc = 0x272598u;
    SET_GPR_U32(ctx, 31, 0x2725A0u);
    ctx->pc = 0x27259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272598u;
    // 0x27259c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2EE8u, 0x272598u, 0x2725A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725A0u;
label_2725a0:
    // 0x2725a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2725A0u;
    {
        const bool branch_taken_0x2725a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725A0u;
        // 0x2725a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725a0) {
            ctx->pc = 0x272608u;
            goto label_272608;
        }
    }
    ctx->pc = 0x2725A8u;
label_2725a8:
    // 0x2725a8: 0xc0b4bba  jal         func_2D2EE8
    ctx->pc = 0x2725A8u;
    SET_GPR_U32(ctx, 31, 0x2725B0u);
    ctx->pc = 0x2725ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725A8u;
    // 0x2725ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2EE8u, 0x2725A8u, 0x2725B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725B0u;
label_2725b0:
    // 0x2725b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2725B0u;
    {
        const bool branch_taken_0x2725b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725B0u;
        // 0x2725b4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725b0) {
            ctx->pc = 0x2725D0u;
            goto label_2725d0;
        }
    }
    ctx->pc = 0x2725B8u;
label_2725b8:
    // 0x2725b8: 0xc0b4bc6  jal         func_2D2F18
    ctx->pc = 0x2725B8u;
    SET_GPR_U32(ctx, 31, 0x2725C0u);
    ctx->pc = 0x2725BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725B8u;
    // 0x2725bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F18u, 0x2725B8u, 0x2725C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725C0u;
label_2725c0:
    // 0x2725c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2725c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2725c4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2725C4u;
    {
        const bool branch_taken_0x2725c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2725C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725C4u;
        // 0x2725c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725c4) {
            ctx->pc = 0x272608u;
            goto label_272608;
        }
    }
    ctx->pc = 0x2725CCu;
    // 0x2725cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2725ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2725d0:
    // 0x2725d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2725D0u;
    {
        const bool branch_taken_0x2725d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2725d0) {
            ctx->pc = 0x2725D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2725D0u;
            // 0x2725d4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2725E4u;
            goto label_2725e4;
        }
    }
    ctx->pc = 0x2725D8u;
    // 0x2725d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2725d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2725dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2725DCu;
    {
        const bool branch_taken_0x2725dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725DCu;
        // 0x2725e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725dc) {
            ctx->pc = 0x2725F4u;
            goto label_2725f4;
        }
    }
    ctx->pc = 0x2725E4u;
label_2725e4:
    // 0x2725e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2725E4u;
    {
        const bool branch_taken_0x2725e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725E4u;
        // 0x2725e8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725e4) {
            ctx->pc = 0x2725F8u;
            goto label_2725f8;
        }
    }
    ctx->pc = 0x2725ECu;
    // 0x2725ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2725ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2725f0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2725f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2725f4:
    // 0x2725f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2725f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2725f8:
    // 0x2725f8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2725f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2725fc: 0x1462ffbc  bne         $v1, $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2725FCu;
    {
        const bool branch_taken_0x2725fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x272600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725FCu;
        // 0x272600: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725fc) {
            ctx->pc = 0x2724F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2724f0;
        }
    }
    ctx->pc = 0x272604u;
label_272604:
    // 0x272604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272608:
    // 0x272608: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x272608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27260c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x27260cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x272610: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x272610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x272614: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x272614u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x272618: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x272618u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27261c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x27261cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x272620: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x272620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x272624: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x272624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x272628: 0x3e00008  jr          $ra
    ctx->pc = 0x272628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272628u;
        // 0x27262c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272630u;
}
