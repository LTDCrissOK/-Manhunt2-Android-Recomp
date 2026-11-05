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

// Function: sub_00126478
// Address: 0x126478 - 0x126510
void sub_00126478_0x126478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126478_0x126478");
#endif

    switch (ctx->pc) {
        case 0x1264b0u: goto label_1264b0;
        case 0x1264c0u: goto label_1264c0;
        case 0x1264ccu: goto label_1264cc;
        case 0x1264ecu: goto label_1264ec;
        default: break;
    }

    ctx->pc = 0x126478u;

    // 0x126478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12647c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126480: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126488: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x126488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12648c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126490: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x126494: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x126494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x126498: 0x9242023c  lbu         $v0, 0x23C($s2)
    ctx->pc = 0x126498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
    // 0x12649c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12649Cu;
    {
        const bool branch_taken_0x12649c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12649Cu;
        // 0x1264a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12649c) {
            ctx->pc = 0x1264E4u;
            goto label_1264e4;
        }
    }
    ctx->pc = 0x1264A4u;
    // 0x1264a4: 0x2653007c  addiu       $s3, $s2, 0x7C
    ctx->pc = 0x1264a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x1264a8: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x1264a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x1264ac: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1264acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1264b0:
    // 0x1264b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1264b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1264b4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1264b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1264b8: 0xc05a69c  jal         func_169A70
    ctx->pc = 0x1264B8u;
    SET_GPR_U32(ctx, 31, 0x1264C0u);
    ctx->pc = 0x1264BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264B8u;
    // 0x1264bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169A70u, 0x1264B8u, 0x1264C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264C0u;
label_1264c0:
    // 0x1264c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1264c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264c4: 0xc042062  jal         func_108188
    ctx->pc = 0x1264C4u;
    SET_GPR_U32(ctx, 31, 0x1264CCu);
    ctx->pc = 0x1264C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264C4u;
    // 0x1264c8: 0x26848758  addiu       $a0, $s4, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108188u, 0x1264C4u, 0x1264CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264CCu;
label_1264cc:
    // 0x1264cc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1264ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1264d0: 0x9242023c  lbu         $v0, 0x23C($s2)
    ctx->pc = 0x1264d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
    // 0x1264d4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1264d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1264d8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1264d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1264dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1264DCu;
    {
        const bool branch_taken_0x1264dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1264E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264DCu;
        // 0x1264e0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264dc) {
            ctx->pc = 0x1264B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1264b0;
        }
    }
    ctx->pc = 0x1264E4u;
label_1264e4:
    // 0x1264e4: 0xc049912  jal         func_126448
    ctx->pc = 0x1264E4u;
    SET_GPR_U32(ctx, 31, 0x1264ECu);
    ctx->pc = 0x1264E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264E4u;
    // 0x1264e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126448u, 0x1264E4u, 0x1264ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264ECu;
label_1264ec:
    // 0x1264ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1264ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1264f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1264f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1264f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1264f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1264f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1264f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1264fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1264fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126500: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x126500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126504: 0x3e00008  jr          $ra
    ctx->pc = 0x126504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126504u;
        // 0x126508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12650Cu;
    // 0x12650c: 0x0  nop
    ctx->pc = 0x12650cu;
    // NOP
    ctx->pc = 0x126510u;
}
