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

// Function: sub_001D53C8
// Address: 0x1d53c8 - 0x1d5498
void sub_001D53C8_0x1d53c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D53C8_0x1d53c8");
#endif

    switch (ctx->pc) {
        case 0x1d5410u: goto label_1d5410;
        case 0x1d5428u: goto label_1d5428;
        case 0x1d544cu: goto label_1d544c;
        default: break;
    }

    ctx->pc = 0x1d53c8u;

    // 0x1d53c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d53c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d53cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d53ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d53d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d53d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d53d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d53d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d53d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53dc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d53dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d53e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d53e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d53e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d53e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d53ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d53ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d53f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d53f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d53f4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d53f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d53f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d53f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d53fc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d5400: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D5400u;
    {
        const bool branch_taken_0x1d5400 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5400u;
        // 0x1d5404: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5400) {
            ctx->pc = 0x1D546Cu;
            goto label_1d546c;
        }
    }
    ctx->pc = 0x1D5408u;
    // 0x1d5408: 0x24170034  addiu       $s7, $zero, 0x34
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d540c: 0x0  nop
    ctx->pc = 0x1d540cu;
    // NOP
label_1d5410:
    // 0x1d5410: 0x1aa00011  blez        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D5410u;
    {
        const bool branch_taken_0x1d5410 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x1D5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5410u;
        // 0x1d5414: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5410) {
            ctx->pc = 0x1D5458u;
            goto label_1d5458;
        }
    }
    ctx->pc = 0x1D5418u;
    // 0x1d5418: 0x779018  mult        $s2, $v1, $s7
    ctx->pc = 0x1d5418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1d541c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1d541cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5420: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1d5420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5424: 0x0  nop
    ctx->pc = 0x1d5424u;
    // NOP
label_1d5428:
    // 0x1d5428: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d542c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1d542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1d5430: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d5430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1d5434: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1d5434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1d5438: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5438u;
    {
        const bool branch_taken_0x1d5438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5438) {
            ctx->pc = 0x1D543Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5438u;
            // 0x1d543c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5450u;
            goto label_1d5450;
        }
    }
    ctx->pc = 0x1D5440u;
    // 0x1d5440: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d5444: 0xc08fea6  jal         func_23FA98
    ctx->pc = 0x1D5444u;
    SET_GPR_U32(ctx, 31, 0x1D544Cu);
    ctx->pc = 0x1D5448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5444u;
    // 0x1d5448: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FA98u, 0x1D5444u, 0x1D544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D544Cu;
label_1d544c:
    // 0x1d544c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d544cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d5450:
    // 0x1d5450: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D5450u;
    {
        const bool branch_taken_0x1d5450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5450u;
        // 0x1d5454: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5450) {
            ctx->pc = 0x1D5428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D5458u;
label_1d5458:
    // 0x1d5458: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d5458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d545c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x1d545cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5460: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d5460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5464: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D5464u;
    {
        const bool branch_taken_0x1d5464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5464) {
            ctx->pc = 0x1D5410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5410;
        }
    }
    ctx->pc = 0x1D546Cu;
label_1d546c:
    // 0x1d546c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5474: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5478: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d547c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d547cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5480: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d5480u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d5484: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d5484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5488: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d5488u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d548c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5490: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5490u;
        // 0x1d5494: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5498u;
}
