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

// Function: sub_001AF408
// Address: 0x1af408 - 0x1af4a0
void sub_001AF408_0x1af408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF408_0x1af408");
#endif

    switch (ctx->pc) {
        case 0x1af420u: goto label_1af420;
        case 0x1af438u: goto label_1af438;
        case 0x1af46cu: goto label_1af46c;
        case 0x1af484u: goto label_1af484;
        default: break;
    }

    ctx->pc = 0x1af408u;

    // 0x1af408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af418: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AF418u;
    SET_GPR_U32(ctx, 31, 0x1AF420u);
    ctx->pc = 0x1AF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF418u;
    // 0x1af41c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AF418u, 0x1AF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF420u;
label_1af420:
    // 0x1af420: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1af420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1af424: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF424u;
    {
        const bool branch_taken_0x1af424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF424u;
        // 0x1af428: 0x241101ba  addiu       $s1, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af424) {
            ctx->pc = 0x1AF440u;
            goto label_1af440;
        }
    }
    ctx->pc = 0x1AF42Cu;
    // 0x1af42c: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1af42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1af430: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AF430u;
    SET_GPR_U32(ctx, 31, 0x1AF438u);
    ctx->pc = 0x1AF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF430u;
    // 0x1af434: 0x241100db  addiu       $s1, $zero, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AF430u, 0x1AF438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF438u;
label_1af438:
    // 0x1af438: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x1af438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1af43c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1af43cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1af440:
    // 0x1af440: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1af440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1af444: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF444u;
    {
        const bool branch_taken_0x1af444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF444u;
        // 0x1af448: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af444) {
            ctx->pc = 0x1AF460u;
            goto label_1af460;
        }
    }
    ctx->pc = 0x1AF44Cu;
    // 0x1af44c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1af44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1af450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af458: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF458u;
    {
        const bool branch_taken_0x1af458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF458u;
        // 0x1af45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af458) {
            ctx->pc = 0x1AF474u;
            goto label_1af474;
        }
    }
    ctx->pc = 0x1AF460u;
label_1af460:
    // 0x1af460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af464: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AF464u;
    SET_GPR_U32(ctx, 31, 0x1AF46Cu);
    ctx->pc = 0x1AF468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF464u;
    // 0x1af468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AF464u, 0x1AF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF46Cu;
label_1af46c:
    // 0x1af46c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF46Cu;
    {
        const bool branch_taken_0x1af46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF46Cu;
        // 0x1af470: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af46c) {
            ctx->pc = 0x1AF488u;
            goto label_1af488;
        }
    }
    ctx->pc = 0x1AF474u;
label_1af474:
    // 0x1af474: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af478: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af47c: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF47Cu;
    SET_GPR_U32(ctx, 31, 0x1AF484u);
    ctx->pc = 0x1AF480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF47Cu;
    // 0x1af480: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF47Cu, 0x1AF484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF484u;
label_1af484:
    // 0x1af484: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1af484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1af488:
    // 0x1af488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af48c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af494: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF494u;
        // 0x1af498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF49Cu;
    // 0x1af49c: 0x0  nop
    ctx->pc = 0x1af49cu;
    // NOP
    ctx->pc = 0x1af4a0u;
}
