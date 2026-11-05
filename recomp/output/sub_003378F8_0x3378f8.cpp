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

// Function: sub_003378F8
// Address: 0x3378f8 - 0x337974
void sub_003378F8_0x3378f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003378F8_0x3378f8");
#endif

    switch (ctx->pc) {
        case 0x337910u: goto label_337910;
        case 0x33795cu: goto label_33795c;
        default: break;
    }

    ctx->pc = 0x3378f8u;

    // 0x3378f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3378f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3378fc: 0x24080149  addiu       $t0, $zero, 0x149
    ctx->pc = 0x3378fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x337900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x337900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x337904: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x337904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x337908: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x337908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
    // 0x33790c: 0xac870060  sw          $a3, 0x60($a0)
    ctx->pc = 0x33790cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 7));
label_337910:
    // 0x337910: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x337910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x337914: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x337914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x337918: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x337918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33791c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x337920: 0x14480010  bne         $v0, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x337920u;
    {
        const bool branch_taken_0x337920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x337924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337920u;
        // 0x337924: 0x24e20004  addiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337920) {
            ctx->pc = 0x337964u;
            goto label_337964;
        }
    }
    ctx->pc = 0x337928u;
    // 0x337928: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x337928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x33792c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33792cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337930: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x337930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337934: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x337934u;
    {
        const bool branch_taken_0x337934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x337938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337934u;
        // 0x337938: 0x8c63fff8  lw          $v1, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337934) {
            ctx->pc = 0x337948u;
            goto label_337948;
        }
    }
    ctx->pc = 0x33793Cu;
    // 0x33793c: 0x38620010  xori        $v0, $v1, 0x10
    ctx->pc = 0x33793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x337940: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x337940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337944: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x337944u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_337948:
    // 0x337948: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x337948u;
    {
        const bool branch_taken_0x337948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337948u;
        // 0x33794c: 0x24e20004  addiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337948) {
            ctx->pc = 0x337964u;
            goto label_337964;
        }
    }
    ctx->pc = 0x337950u;
    // 0x337950: 0xac860498  sw          $a2, 0x498($a0)
    ctx->pc = 0x337950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 6));
    // 0x337954: 0xc0ce08c  jal         func_338230
    ctx->pc = 0x337954u;
    SET_GPR_U32(ctx, 31, 0x33795Cu);
    ctx->pc = 0x337958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337954u;
    // 0x337958: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338230u, 0x337954u, 0x33795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33795Cu;
label_33795c:
    // 0x33795c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33795Cu;
    {
        const bool branch_taken_0x33795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33795Cu;
        // 0x337960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33795c) {
            ctx->pc = 0x33796Cu;
            goto label_33796c;
        }
    }
    ctx->pc = 0x337964u;
label_337964:
    // 0x337964: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x337964u;
    {
        const bool branch_taken_0x337964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337964u;
        // 0x337968: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337964) {
            ctx->pc = 0x337910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337910;
        }
    }
    ctx->pc = 0x33796Cu;
label_33796c:
    // 0x33796c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33796cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337970: 0x3e00008  jr          $ra
    ctx->pc = 0x337970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337978u;
}
