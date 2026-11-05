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

// Function: sub_003120A0
// Address: 0x3120a0 - 0x312160
void sub_003120A0_0x3120a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003120A0_0x3120a0");
#endif

    switch (ctx->pc) {
        case 0x3120c8u: goto label_3120c8;
        case 0x31210cu: goto label_31210c;
        case 0x312124u: goto label_312124;
        case 0x312130u: goto label_312130;
        case 0x312140u: goto label_312140;
        case 0x312148u: goto label_312148;
        default: break;
    }

    ctx->pc = 0x3120a0u;

    // 0x3120a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3120a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3120a4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x3120a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3120a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3120a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3120ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3120acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3120b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3120b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3120b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3120b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3120b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3120bc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3120bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3120c0: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x3120C0u;
    SET_GPR_U32(ctx, 31, 0x3120C8u);
    ctx->pc = 0x3120C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3120C0u;
    // 0x3120c4: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x3120C0u, 0x3120C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120C8u;
label_3120c8:
    // 0x3120c8: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x3120c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3120cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3120ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3120d0: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x3120d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3120d4: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x3120d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x3120d8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3120d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3120dc: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x3120dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3120e0: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x3120e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3120e4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3120e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3120e8: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x3120e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3120ec: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x3120ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3120f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3120f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3120f4: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x3120f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3120f8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3120f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3120fc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3120FCu;
    {
        const bool branch_taken_0x3120fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3120fc) {
            ctx->pc = 0x312100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3120FCu;
            // 0x312100: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312110u;
            goto label_312110;
        }
    }
    ctx->pc = 0x312104u;
    // 0x312104: 0xc074f9e  jal         func_1D3E78
    ctx->pc = 0x312104u;
    SET_GPR_U32(ctx, 31, 0x31210Cu);
    ctx->pc = 0x312108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312104u;
    // 0x312108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3E78u, 0x312104u, 0x31210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31210Cu;
label_31210c:
    // 0x31210c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31210cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_312110:
    // 0x312110: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x312110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x312114: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x312114u;
    {
        const bool branch_taken_0x312114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312114) {
            ctx->pc = 0x312140u;
            goto label_312140;
        }
    }
    ctx->pc = 0x31211Cu;
    // 0x31211c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x31211Cu;
    SET_GPR_U32(ctx, 31, 0x312124u);
    ctx->pc = 0x312120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31211Cu;
    // 0x312120: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x31211Cu, 0x312124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312124u;
label_312124:
    // 0x312124: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x312124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x312128: 0xc074f8e  jal         func_1D3E38
    ctx->pc = 0x312128u;
    SET_GPR_U32(ctx, 31, 0x312130u);
    ctx->pc = 0x31212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312128u;
    // 0x31212c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3E38u, 0x312128u, 0x312130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312130u;
label_312130:
    // 0x312130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x312134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312138: 0xc07508a  jal         func_1D4228
    ctx->pc = 0x312138u;
    SET_GPR_U32(ctx, 31, 0x312140u);
    ctx->pc = 0x31213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312138u;
    // 0x31213c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4228u, 0x312138u, 0x312140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312140u;
label_312140:
    // 0x312140: 0xc0c48da  jal         func_312368
    ctx->pc = 0x312140u;
    SET_GPR_U32(ctx, 31, 0x312148u);
    ctx->pc = 0x312144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312140u;
    // 0x312144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x312140u, 0x312148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312148u;
label_312148:
    // 0x312148: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x312148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31214c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31214cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x312150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312158: 0x3e00008  jr          $ra
    ctx->pc = 0x312158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312158u;
        // 0x31215c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312160u;
}
