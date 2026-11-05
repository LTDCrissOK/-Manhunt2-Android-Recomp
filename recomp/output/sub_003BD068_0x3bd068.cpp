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

// Function: sub_003BD068
// Address: 0x3bd068 - 0x3bd0f0
void sub_003BD068_0x3bd068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD068_0x3bd068");
#endif

    switch (ctx->pc) {
        case 0x3bd0a8u: goto label_3bd0a8;
        case 0x3bd0b4u: goto label_3bd0b4;
        default: break;
    }

    ctx->pc = 0x3bd068u;

    // 0x3bd068: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3bd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bd06c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bd06cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bd070: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3bd070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3bd074: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x3bd074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x3bd078: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3bd078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3bd07c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x3bd07cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x3bd080: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3bd080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3bd084: 0x399c3  sra         $s3, $v1, 7
    ctx->pc = 0x3bd084u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 7));
    // 0x3bd088: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bd088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bd08c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bd08cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bd090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bd094: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3bd094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bd098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bd09c: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3BD09Cu;
    {
        const bool branch_taken_0x3bd09c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3BD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD09Cu;
        // 0x3bd0a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd09c) {
            ctx->pc = 0x3BD0CCu;
            goto label_3bd0cc;
        }
    }
    ctx->pc = 0x3BD0A4u;
    // 0x3bd0a4: 0x0  nop
    ctx->pc = 0x3bd0a4u;
    // NOP
label_3bd0a8:
    // 0x3bd0a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bd0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd0ac: 0xc0ef3d4  jal         func_3BCF50
    ctx->pc = 0x3BD0ACu;
    SET_GPR_U32(ctx, 31, 0x3BD0B4u);
    ctx->pc = 0x3BD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD0ACu;
    // 0x3bd0b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCF50u, 0x3BD0ACu, 0x3BD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD0B4u;
label_3bd0b4:
    // 0x3bd0b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BD0B4u;
    {
        const bool branch_taken_0x3bd0b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3BD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0B4u;
        // 0x3bd0b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd0b4) {
            ctx->pc = 0x3BD0D0u;
            goto label_3bd0d0;
        }
    }
    ctx->pc = 0x3BD0BCu;
    // 0x3bd0bc: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x3bd0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x3bd0c0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x3bd0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3bd0c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3BD0C4u;
    {
        const bool branch_taken_0x3bd0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0C4u;
        // 0x3bd0c8: 0x26310003  addiu       $s1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd0c4) {
            ctx->pc = 0x3BD0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd0a8;
        }
    }
    ctx->pc = 0x3BD0CCu;
label_3bd0cc:
    // 0x3bd0cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bd0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd0d0:
    // 0x3bd0d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bd0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bd0d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3bd0d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bd0d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bd0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bd0dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bd0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd0e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bd0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0E4u;
        // 0x3bd0e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD0ECu;
    // 0x3bd0ec: 0x0  nop
    ctx->pc = 0x3bd0ecu;
    // NOP
    ctx->pc = 0x3bd0f0u;
}
