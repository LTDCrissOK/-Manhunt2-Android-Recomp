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

// Function: sub_0017CBB8
// Address: 0x17cbb8 - 0x17cc40
void sub_0017CBB8_0x17cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CBB8_0x17cbb8");
#endif

    switch (ctx->pc) {
        case 0x17cc04u: goto label_17cc04;
        default: break;
    }

    ctx->pc = 0x17cbb8u;

    // 0x17cbb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17cbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17cbbc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x17cbc0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x17cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x17cbc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cbc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17cbcc: 0x2450bd80  addiu       $s0, $v0, -0x4280
    ctx->pc = 0x17cbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
    // 0x17cbd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17cbd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17cbd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbd8: 0x8c48bd80  lw          $t0, -0x4280($v0)
    ctx->pc = 0x17cbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x48BD80u));
    // 0x17cbdc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17cbdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbe0: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x17cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x17cbe4: 0x1504000f  bne         $t0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17CBE4u;
    {
        const bool branch_taken_0x17cbe4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x17CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBE4u;
        // 0x17cbe8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbe4) {
            ctx->pc = 0x17CC24u;
            goto label_17cc24;
        }
    }
    ctx->pc = 0x17CBECu;
    // 0x17cbec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbf0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x17cbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x17cbf4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x17cbf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x17cbf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17cbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17cbfc: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x17CBFCu;
    SET_GPR_U32(ctx, 31, 0x17CC04u);
    ctx->pc = 0x17CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBFCu;
    // 0x17cc00: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x17CBFCu, 0x17CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CC04u;
label_17cc04:
    // 0x17cc04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CC04u;
    {
        const bool branch_taken_0x17cc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC04u;
        // 0x17cc08: 0x26030030  addiu       $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc04) {
            ctx->pc = 0x17CC24u;
            goto label_17cc24;
        }
    }
    ctx->pc = 0x17CC0Cu;
    // 0x17cc0c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17cc10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x17cc14: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17cc14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cc18: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x17cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17cc1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CC1Cu;
    {
        const bool branch_taken_0x17cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC1Cu;
        // 0x17cc20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc1c) {
            ctx->pc = 0x17CC28u;
            goto label_17cc28;
        }
    }
    ctx->pc = 0x17CC24u;
label_17cc24:
    // 0x17cc24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17cc24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cc28:
    // 0x17cc28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cc2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17cc2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cc30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17cc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cc34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17cc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x17CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC38u;
        // 0x17cc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CC40u;
}
