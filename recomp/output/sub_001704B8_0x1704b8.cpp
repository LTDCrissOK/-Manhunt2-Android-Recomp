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

// Function: sub_001704B8
// Address: 0x1704b8 - 0x170538
void sub_001704B8_0x1704b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001704B8_0x1704b8");
#endif

    switch (ctx->pc) {
        case 0x1704f0u: goto label_1704f0;
        case 0x170518u: goto label_170518;
        default: break;
    }

    ctx->pc = 0x1704b8u;

    // 0x1704b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1704b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1704bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1704bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1704c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1704c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1704c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1704c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1704c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1704c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1704ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1704d0: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1704d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1704d4: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1704D4u;
    {
        const bool branch_taken_0x1704d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1704d4) {
            ctx->pc = 0x1704D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1704D4u;
            // 0x1704d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170524u;
            goto label_170524;
        }
    }
    ctx->pc = 0x1704DCu;
    // 0x1704dc: 0x8e110228  lw          $s1, 0x228($s0)
    ctx->pc = 0x1704dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x1704e0: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1704E0u;
    {
        const bool branch_taken_0x1704e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1704e0) {
            ctx->pc = 0x1704E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1704E0u;
            // 0x1704e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170524u;
            goto label_170524;
        }
    }
    ctx->pc = 0x1704E8u;
    // 0x1704e8: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1704E8u;
    SET_GPR_U32(ctx, 31, 0x1704F0u);
    ctx->pc = 0x1704ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704E8u;
    // 0x1704ec: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1704E8u, 0x1704F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704F0u;
label_1704f0:
    // 0x1704f0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1704f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1704f4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1704f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1704f8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1704f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1704fc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1704fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x170500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x170500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x170504: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x170504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170508: 0x8c660108  lw          $a2, 0x108($v1)
    ctx->pc = 0x170508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17050c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x17050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x170510: 0xc04668a  jal         func_119A28
    ctx->pc = 0x170510u;
    SET_GPR_U32(ctx, 31, 0x170518u);
    ctx->pc = 0x170514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170510u;
    // 0x170514: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x170510u, 0x170518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170518u;
label_170518:
    // 0x170518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17051c: 0xae0202bc  sw          $v0, 0x2BC($s0)
    ctx->pc = 0x17051cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
    // 0x170520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170524:
    // 0x170524: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17052c: 0x3e00008  jr          $ra
    ctx->pc = 0x17052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17052Cu;
        // 0x170530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17052Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170534u;
    // 0x170534: 0x0  nop
    ctx->pc = 0x170534u;
    // NOP
    ctx->pc = 0x170538u;
}
