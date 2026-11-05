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

// Function: sub_0010C2E8
// Address: 0x10c2e8 - 0x10c370
void sub_0010C2E8_0x10c2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C2E8_0x10c2e8");
#endif

    switch (ctx->pc) {
        case 0x10c310u: goto label_10c310;
        case 0x10c33cu: goto label_10c33c;
        case 0x10c344u: goto label_10c344;
        default: break;
    }

    ctx->pc = 0x10c2e8u;

    // 0x10c2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c2ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c2f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c2fc: 0x920200cc  lbu         $v0, 0xCC($s0)
    ctx->pc = 0x10c2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x10c300: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10C300u;
    {
        const bool branch_taken_0x10c300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C300u;
        // 0x10c304: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c300) {
            ctx->pc = 0x10C34Cu;
            goto label_10c34c;
        }
    }
    ctx->pc = 0x10C308u;
    // 0x10c308: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10C308u;
    SET_GPR_U32(ctx, 31, 0x10C310u);
    ctx->pc = 0x10C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C308u;
    // 0x10c30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10C308u, 0x10C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C310u;
label_10c310:
    // 0x10c310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10c310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c314: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10c318: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10C318u;
    {
        const bool branch_taken_0x10c318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C318u;
        // 0x10c31c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c318) {
            ctx->pc = 0x10C34Cu;
            goto label_10c34c;
        }
    }
    ctx->pc = 0x10C320u;
    // 0x10c320: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10c324: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10c324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10c328: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10c32c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C32Cu;
    {
        const bool branch_taken_0x10c32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C32Cu;
        // 0x10c330: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c32c) {
            ctx->pc = 0x10C350u;
            goto label_10c350;
        }
    }
    ctx->pc = 0x10C334u;
    // 0x10c334: 0xc043d44  jal         func_10F510
    ctx->pc = 0x10C334u;
    SET_GPR_U32(ctx, 31, 0x10C33Cu);
    ctx->pc = 0x10C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C334u;
    // 0x10c338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F510u, 0x10C334u, 0x10C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C33Cu;
label_10c33c:
    // 0x10c33c: 0xc043108  jal         func_10C420
    ctx->pc = 0x10C33Cu;
    SET_GPR_U32(ctx, 31, 0x10C344u);
    ctx->pc = 0x10C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C33Cu;
    // 0x10c340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C420u, 0x10C33Cu, 0x10C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C344u;
label_10c344:
    // 0x10c344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C344u;
    {
        const bool branch_taken_0x10c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C344u;
        // 0x10c348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c344) {
            ctx->pc = 0x10C350u;
            goto label_10c350;
        }
    }
    ctx->pc = 0x10C34Cu;
label_10c34c:
    // 0x10c34c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c350:
    // 0x10c350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c35c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C35Cu;
        // 0x10c360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C364u;
    // 0x10c364: 0x0  nop
    ctx->pc = 0x10c364u;
    // NOP
    // 0x10c368: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10c368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10c36c: 0x0  nop
    ctx->pc = 0x10c36cu;
    // NOP
    ctx->pc = 0x10c370u;
}
