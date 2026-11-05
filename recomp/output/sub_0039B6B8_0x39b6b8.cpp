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

// Function: sub_0039B6B8
// Address: 0x39b6b8 - 0x39b740
void sub_0039B6B8_0x39b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B6B8_0x39b6b8");
#endif

    switch (ctx->pc) {
        case 0x39b700u: goto label_39b700;
        case 0x39b708u: goto label_39b708;
        case 0x39b71cu: goto label_39b71c;
        case 0x39b728u: goto label_39b728;
        default: break;
    }

    ctx->pc = 0x39b6b8u;

    // 0x39b6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b6c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39b6c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39b6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b6cc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39B6CCu;
    {
        const bool branch_taken_0x39b6cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6CCu;
        // 0x39b6d0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b6cc) {
            ctx->pc = 0x39B6DCu;
            goto label_39b6dc;
        }
    }
    ctx->pc = 0x39B6D4u;
    // 0x39b6d4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x39B6D4u;
    {
        const bool branch_taken_0x39b6d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b6d4) {
            ctx->pc = 0x39B6F8u;
            goto label_39b6f8;
        }
    }
    ctx->pc = 0x39B6DCu;
label_39b6dc:
    // 0x39b6dc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39b6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b6e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b6e8: 0x2484b308  addiu       $a0, $a0, -0x4CF8
    ctx->pc = 0x39b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947592));
    // 0x39b6ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b6f0: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39B6F0u;
    ctx->pc = 0x39B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B6F0u;
    // 0x39b6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39B6F8u;
label_39b6f8:
    // 0x39b6f8: 0xc0e6e10  jal         func_39B840
    ctx->pc = 0x39B6F8u;
    SET_GPR_U32(ctx, 31, 0x39B700u);
    ctx->pc = 0x39B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B840u, 0x39B6F8u, 0x39B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B700u;
label_39b700:
    // 0x39b700: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x39B700u;
    SET_GPR_U32(ctx, 31, 0x39B708u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39B700u, 0x39B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B708u;
label_39b708:
    // 0x39b708: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39b70c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39b70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b710: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x39b710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x39b714: 0xc0e6d28  jal         func_39B4A0
    ctx->pc = 0x39B714u;
    SET_GPR_U32(ctx, 31, 0x39B71Cu);
    ctx->pc = 0x39B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B714u;
    // 0x39b718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B4A0u, 0x39B714u, 0x39B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B71Cu;
label_39b71c:
    // 0x39b71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b720: 0xc0e7288  jal         func_39CA20
    ctx->pc = 0x39B720u;
    SET_GPR_U32(ctx, 31, 0x39B728u);
    ctx->pc = 0x39B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B720u;
    // 0x39b724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CA20u, 0x39B720u, 0x39B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B728u;
label_39b728:
    // 0x39b728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b72c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b734: 0x80ebe56  j           func_3AF958
    ctx->pc = 0x39B734u;
    ctx->pc = 0x39B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B734u;
    // 0x39b738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x39B73Cu;
    // 0x39b73c: 0x0  nop
    ctx->pc = 0x39b73cu;
    // NOP
    ctx->pc = 0x39b740u;
}
