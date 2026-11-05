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

// Function: sub_00168BD8
// Address: 0x168bd8 - 0x168c48
void sub_00168BD8_0x168bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168BD8_0x168bd8");
#endif

    switch (ctx->pc) {
        case 0x168bf4u: goto label_168bf4;
        default: break;
    }

    ctx->pc = 0x168bd8u;

    // 0x168bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168be4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x168be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x168be8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x168be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x168bec: 0xc049490  jal         func_125240
    ctx->pc = 0x168BECu;
    SET_GPR_U32(ctx, 31, 0x168BF4u);
    ctx->pc = 0x168BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BECu;
    // 0x168bf0: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125240u, 0x168BECu, 0x168BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BF4u;
label_168bf4:
    // 0x168bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x168bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bf8: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x168BF8u;
    {
        const bool branch_taken_0x168bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x168bf8) {
            ctx->pc = 0x168BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168BF8u;
            // 0x168bfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168C3Cu;
            goto label_168c3c;
        }
    }
    ctx->pc = 0x168C00u;
    // 0x168c00: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x168c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c04: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x168c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x168c08: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x168c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168c0c: 0xe601033c  swc1        $f1, 0x33C($s0)
    ctx->pc = 0x168c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x168c10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x168c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x168c14: 0xae020340  sw          $v0, 0x340($s0)
    ctx->pc = 0x168c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 2));
    // 0x168c18: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x168c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x168c1c: 0xae030344  sw          $v1, 0x344($s0)
    ctx->pc = 0x168c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 3));
    // 0x168c20: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x168c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x168c24: 0xae020348  sw          $v0, 0x348($s0)
    ctx->pc = 0x168c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 2));
    // 0x168c28: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x168c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168c2c: 0xae03034c  sw          $v1, 0x34C($s0)
    ctx->pc = 0x168c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 3));
    // 0x168c30: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x168c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x168c34: 0xae020350  sw          $v0, 0x350($s0)
    ctx->pc = 0x168c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
    // 0x168c38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168c3c:
    // 0x168c3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x168c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168c40: 0x3e00008  jr          $ra
    ctx->pc = 0x168C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C40u;
        // 0x168c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168C48u;
}
