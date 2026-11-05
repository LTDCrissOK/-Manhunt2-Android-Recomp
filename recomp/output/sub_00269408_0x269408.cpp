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

// Function: sub_00269408
// Address: 0x269408 - 0x2694d0
void sub_00269408_0x269408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269408_0x269408");
#endif

    switch (ctx->pc) {
        case 0x269420u: goto label_269420;
        case 0x269494u: goto label_269494;
        case 0x2694b8u: goto label_2694b8;
        default: break;
    }

    ctx->pc = 0x269408u;

    // 0x269408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26940c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x269410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269414: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x269414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x269418: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x269418u;
    SET_GPR_U32(ctx, 31, 0x269420u);
    ctx->pc = 0x26941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269418u;
    // 0x26941c: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x269418u, 0x269420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269420u;
label_269420:
    // 0x269420: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x269420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x269424: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x269424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x269428: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x269428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26942c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26942cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x269430: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x269430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x269434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269438: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x269438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x26943c: 0x246326c8  addiu       $v1, $v1, 0x26C8
    ctx->pc = 0x26943cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9928));
    // 0x269440: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x269440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x269444: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x269444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x269448: 0x26020230  addiu       $v0, $s0, 0x230
    ctx->pc = 0x269448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x26944c: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x26944cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x269450: 0xae040224  sw          $a0, 0x224($s0)
    ctx->pc = 0x269450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 4));
    // 0x269454: 0x26030250  addiu       $v1, $s0, 0x250
    ctx->pc = 0x269454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x269458: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x269458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x26945c: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x26945cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x269460: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x269460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x269464: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x269464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x269468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x269468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26946c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x26946cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x269470: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x269470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x269474: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x269474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x269478: 0xe6000244  swc1        $f0, 0x244($s0)
    ctx->pc = 0x269478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
    // 0x26947c: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x26947cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x269480: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x269480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x269484: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x269484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x269488: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x269488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x26948c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26948Cu;
    SET_GPR_U32(ctx, 31, 0x269494u);
    ctx->pc = 0x269490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26948Cu;
    // 0x269490: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26948Cu, 0x269494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269494u;
label_269494:
    // 0x269494: 0xe6140280  swc1        $f20, 0x280($s0)
    ctx->pc = 0x269494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x269498: 0x26020284  addiu       $v0, $s0, 0x284
    ctx->pc = 0x269498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x26949c: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x26949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x2694a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2694a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2694a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2694a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2694a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2694acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2694b0: 0xc09a6e4  jal         func_269B90
    ctx->pc = 0x2694B0u;
    SET_GPR_U32(ctx, 31, 0x2694B8u);
    ctx->pc = 0x2694B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2694B0u;
    // 0x2694b4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B90u, 0x2694B0u, 0x2694B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694B8u;
label_2694b8:
    // 0x2694b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2694b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2694bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2694c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2694c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2694c4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2694c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2694c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2694C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2694CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694C8u;
        // 0x2694cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2694C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2694D0u;
}
