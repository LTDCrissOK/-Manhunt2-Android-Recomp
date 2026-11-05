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

// Function: sub_0014D2C0
// Address: 0x14d2c0 - 0x14d330
void sub_0014D2C0_0x14d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D2C0_0x14d2c0");
#endif

    switch (ctx->pc) {
        case 0x14d2e4u: goto label_14d2e4;
        case 0x14d2f0u: goto label_14d2f0;
        case 0x14d300u: goto label_14d300;
        case 0x14d30cu: goto label_14d30c;
        case 0x14d31cu: goto label_14d31c;
        default: break;
    }

    ctx->pc = 0x14d2c0u;

    // 0x14d2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d2c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14d2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14d2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d2d8: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x14d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x14d2dc: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x14D2DCu;
    SET_GPR_U32(ctx, 31, 0x14D2E4u);
    ctx->pc = 0x14D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2DCu;
    // 0x14d2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x14D2DCu, 0x14D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2E4u;
label_14d2e4:
    // 0x14d2e4: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x14d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x14d2e8: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x14D2E8u;
    SET_GPR_U32(ctx, 31, 0x14D2F0u);
    ctx->pc = 0x14D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2E8u;
    // 0x14d2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x14D2E8u, 0x14D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2F0u;
label_14d2f0:
    // 0x14d2f0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x14d2f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x14d2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2f8: 0xc046272  jal         func_1189C8
    ctx->pc = 0x14D2F8u;
    SET_GPR_U32(ctx, 31, 0x14D300u);
    ctx->pc = 0x14D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2F8u;
    // 0x14d2fc: 0xe6000564  swc1        $f0, 0x564($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x14D2F8u, 0x14D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D300u;
label_14d300:
    // 0x14d300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d304: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x14D304u;
    SET_GPR_U32(ctx, 31, 0x14D30Cu);
    ctx->pc = 0x14D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D304u;
    // 0x14d308: 0xae020568  sw          $v0, 0x568($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x14D304u, 0x14D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D30Cu;
label_14d30c:
    // 0x14d30c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14d310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d314: 0xc042136  jal         func_1084D8
    ctx->pc = 0x14D314u;
    SET_GPR_U32(ctx, 31, 0x14D31Cu);
    ctx->pc = 0x14D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D314u;
    // 0x14d318: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x14D314u, 0x14D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D31Cu;
label_14d31c:
    // 0x14d31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d328: 0x3e00008  jr          $ra
    ctx->pc = 0x14D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D328u;
        // 0x14d32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D330u;
}
