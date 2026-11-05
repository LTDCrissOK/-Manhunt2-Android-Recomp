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

// Function: sub_001253E8
// Address: 0x1253e8 - 0x125470
void sub_001253E8_0x1253e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001253E8_0x1253e8");
#endif

    switch (ctx->pc) {
        case 0x12540cu: goto label_12540c;
        case 0x12541cu: goto label_12541c;
        case 0x125438u: goto label_125438;
        case 0x12544cu: goto label_12544c;
        case 0x125454u: goto label_125454;
        default: break;
    }

    ctx->pc = 0x1253e8u;

    // 0x1253e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1253e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1253ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1253ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1253f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1253f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1253f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1253f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1253f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1253fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1253fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x125400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x125404: 0xc0a4758  jal         func_291D60
    ctx->pc = 0x125404u;
    SET_GPR_U32(ctx, 31, 0x12540Cu);
    ctx->pc = 0x125408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125404u;
    // 0x125408: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x125404u, 0x12540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12540Cu;
label_12540c:
    // 0x12540c: 0xa0400061  sb          $zero, 0x61($v0)
    ctx->pc = 0x12540cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x125410: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x125410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125414: 0xc042f00  jal         func_10BC00
    ctx->pc = 0x125414u;
    SET_GPR_U32(ctx, 31, 0x12541Cu);
    ctx->pc = 0x125418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125414u;
    // 0x125418: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC00u, 0x125414u, 0x12541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12541Cu;
label_12541c:
    // 0x12541c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125420: 0xae000438  sw          $zero, 0x438($s0)
    ctx->pc = 0x125420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1080), GPR_U32(ctx, 0));
    // 0x125424: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x125424u;
    {
        const bool branch_taken_0x125424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125424u;
        // 0x125428: 0xae020434  sw          $v0, 0x434($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125424) {
            ctx->pc = 0x125440u;
            goto label_125440;
        }
    }
    ctx->pc = 0x12542Cu;
    // 0x12542c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12542cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125430: 0xc0cda26  jal         func_336898
    ctx->pc = 0x125430u;
    SET_GPR_U32(ctx, 31, 0x125438u);
    ctx->pc = 0x125434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125430u;
    // 0x125434: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x125430u, 0x125438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125438u;
label_125438:
    // 0x125438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x125438u;
    {
        const bool branch_taken_0x125438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125438) {
            ctx->pc = 0x12544Cu;
            goto label_12544c;
        }
    }
    ctx->pc = 0x125440u;
label_125440:
    // 0x125440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125444: 0xc0cda26  jal         func_336898
    ctx->pc = 0x125444u;
    SET_GPR_U32(ctx, 31, 0x12544Cu);
    ctx->pc = 0x125448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125444u;
    // 0x125448: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x125444u, 0x12544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12544Cu;
label_12544c:
    // 0x12544c: 0xc0bf23e  jal         func_2FC8F8
    ctx->pc = 0x12544Cu;
    SET_GPR_U32(ctx, 31, 0x125454u);
    ctx->pc = 0x2FC8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8F8u, 0x12544Cu, 0x125454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125454u;
label_125454:
    // 0x125454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12545c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12545cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125460: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x125460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125464: 0x3e00008  jr          $ra
    ctx->pc = 0x125464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125464u;
        // 0x125468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12546Cu;
    // 0x12546c: 0x0  nop
    ctx->pc = 0x12546cu;
    // NOP
    ctx->pc = 0x125470u;
}
