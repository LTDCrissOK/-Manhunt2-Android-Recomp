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

// Function: sub_002C44B8
// Address: 0x2c44b8 - 0x2c4568
void sub_002C44B8_0x2c44b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C44B8_0x2c44b8");
#endif

    switch (ctx->pc) {
        case 0x2c4510u: goto label_2c4510;
        case 0x2c4520u: goto label_2c4520;
        case 0x2c452cu: goto label_2c452c;
        default: break;
    }

    ctx->pc = 0x2c44b8u;

    // 0x2c44b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c44b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c44bc: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x2c44bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x2c44c0: 0x342123f0  ori         $at, $at, 0x23F0
    ctx->pc = 0x2c44c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9200);
    // 0x2c44c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c44c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c44c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c44c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c44cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c44ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c44d0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c44d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c44d4: 0x3c01c974  lui         $at, 0xC974
    ctx->pc = 0x2c44d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51572 << 16));
    // 0x2c44d8: 0x342123f0  ori         $at, $at, 0x23F0
    ctx->pc = 0x2c44d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9200);
    // 0x2c44dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c44dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c44e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c44e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c44e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c44e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c44e8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c44e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c44ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c44ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c44f0: 0x24a54400  addiu       $a1, $a1, 0x4400
    ctx->pc = 0x2c44f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17408));
    // 0x2c44f4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2c44f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c44f8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2c44f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2c44fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c44fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4500: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2c4500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c4504: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2c4504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c4508: 0xc0b10c4  jal         func_2C4310
    ctx->pc = 0x2C4508u;
    SET_GPR_U32(ctx, 31, 0x2C4510u);
    ctx->pc = 0x2C450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4508u;
    // 0x2c450c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4310u, 0x2C4508u, 0x2C4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4510u;
label_2c4510:
    // 0x2c4510: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C4510u;
    {
        const bool branch_taken_0x2c4510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4510) {
            ctx->pc = 0x2C4514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4510u;
            // 0x2c4514: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4554u;
            goto label_2c4554;
        }
    }
    ctx->pc = 0x2C4518u;
    // 0x2c4518: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C4518u;
    SET_GPR_U32(ctx, 31, 0x2C4520u);
    ctx->pc = 0x2C451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4518u;
    // 0x2c451c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C4518u, 0x2C4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4520u;
label_2c4520:
    // 0x2c4520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4524: 0xc0b10a6  jal         func_2C4298
    ctx->pc = 0x2C4524u;
    SET_GPR_U32(ctx, 31, 0x2C452Cu);
    ctx->pc = 0x2C4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4524u;
    // 0x2c4528: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4298u, 0x2C4524u, 0x2C452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C452Cu;
label_2c452c:
    // 0x2c452c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2c452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4530: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2c4530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4534: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2c4534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4538: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c4538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c453c: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2c453cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2c4540: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2c4540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c4544: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c4544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c4548: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2c4548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c454c: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x2c454cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c4550: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c4550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4554:
    // 0x2c4554: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c4554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c4558: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c4558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c455c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C455Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C455Cu;
        // 0x2c4560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C455Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4564u;
    // 0x2c4564: 0x0  nop
    ctx->pc = 0x2c4564u;
    // NOP
    ctx->pc = 0x2c4568u;
}
