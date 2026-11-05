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

// Function: sub_001B20D0
// Address: 0x1b20d0 - 0x1b2180
void sub_001B20D0_0x1b20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B20D0_0x1b20d0");
#endif

    switch (ctx->pc) {
        case 0x1b20ecu: goto label_1b20ec;
        case 0x1b2130u: goto label_1b2130;
        case 0x1b216cu: goto label_1b216c;
        default: break;
    }

    ctx->pc = 0x1b20d0u;

    // 0x1b20d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b20d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b20d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b20d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b20dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b20dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b20e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b20e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b20e4: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B20E4u;
    SET_GPR_U32(ctx, 31, 0x1B20ECu);
    ctx->pc = 0x1B20E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20E4u;
    // 0x1b20e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B20E4u, 0x1B20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20ECu;
label_1b20ec:
    // 0x1b20ec: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1b20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1b20f0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1b20f4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1b20f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1b20f8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B20F8u;
    {
        const bool branch_taken_0x1b20f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20F8u;
        // 0x1b20fc: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20f8) {
            ctx->pc = 0x1B216Cu;
            goto label_1b216c;
        }
    }
    ctx->pc = 0x1B2100u;
    // 0x1b2100: 0x240200ad  addiu       $v0, $zero, 0xAD
    ctx->pc = 0x1b2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x1b2104: 0x5482001a  bnel        $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B2104u;
    {
        const bool branch_taken_0x1b2104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2104) {
            ctx->pc = 0x1B2108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2104u;
            // 0x1b2108: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2170u;
            goto label_1b2170;
        }
    }
    ctx->pc = 0x1B210Cu;
    // 0x1b210c: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1b210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b2110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2114: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x1b2114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b2118: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1b2118u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b211c: 0x0  nop
    ctx->pc = 0x1b211cu;
    // NOP
    // 0x1b2120: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2120u;
    {
        const bool branch_taken_0x1b2120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2120u;
        // 0x1b2124: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2120) {
            ctx->pc = 0x1B2138u;
            goto label_1b2138;
        }
    }
    ctx->pc = 0x1B2128u;
    // 0x1b2128: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1B2128u;
    SET_GPR_U32(ctx, 31, 0x1B2130u);
    ctx->pc = 0x1B212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2128u;
    // 0x1b212c: 0xc44c8960  lwc1        $f12, -0x76A0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1B2128u, 0x1B2130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2130u;
label_1b2130:
    // 0x1b2130: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B2130u;
    {
        const bool branch_taken_0x1b2130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2130u;
        // 0x1b2134: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2130) {
            ctx->pc = 0x1B2170u;
            goto label_1b2170;
        }
    }
    ctx->pc = 0x1B2138u;
label_1b2138:
    // 0x1b2138: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b2138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b213c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b2140: 0xc4418964  lwc1        $f1, -0x769C($v0)
    ctx->pc = 0x1b2140u;
    { uint32_t bits = FAST_READ32(0x3F8964u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2144: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1b2144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2148: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b2148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b214c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b214cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2150: 0x0  nop
    ctx->pc = 0x1b2150u;
    // NOP
    // 0x1b2154: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2154u;
    {
        const bool branch_taken_0x1b2154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2154u;
        // 0x1b2158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2154) {
            ctx->pc = 0x1B216Cu;
            goto label_1b216c;
        }
    }
    ctx->pc = 0x1B215Cu;
    // 0x1b215c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2160: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1b2160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1b2164: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1B2164u;
    SET_GPR_U32(ctx, 31, 0x1B216Cu);
    ctx->pc = 0x1B2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2164u;
    // 0x1b2168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1B2164u, 0x1B216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B216Cu;
label_1b216c:
    // 0x1b216c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b216cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2170:
    // 0x1b2170: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2174: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2174u;
        // 0x1b2178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B217Cu;
    // 0x1b217c: 0x0  nop
    ctx->pc = 0x1b217cu;
    // NOP
    ctx->pc = 0x1b2180u;
}
