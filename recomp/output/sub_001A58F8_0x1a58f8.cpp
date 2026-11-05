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

// Function: sub_001A58F8
// Address: 0x1a58f8 - 0x1a5990
void sub_001A58F8_0x1a58f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A58F8_0x1a58f8");
#endif

    switch (ctx->pc) {
        case 0x1a5928u: goto label_1a5928;
        case 0x1a593cu: goto label_1a593c;
        case 0x1a5948u: goto label_1a5948;
        case 0x1a595cu: goto label_1a595c;
        case 0x1a5974u: goto label_1a5974;
        default: break;
    }

    ctx->pc = 0x1a58f8u;

    // 0x1a58f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a58fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a58fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a5904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5908: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a590c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5910: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5914: 0x8e4401e4  lw          $a0, 0x1E4($s2)
    ctx->pc = 0x1a5914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x1a5918: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5918u;
    {
        const bool branch_taken_0x1a5918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5918u;
        // 0x1a591c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5918) {
            ctx->pc = 0x1A5928u;
            goto label_1a5928;
        }
    }
    ctx->pc = 0x1A5920u;
    // 0x1a5920: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x1A5920u;
    SET_GPR_U32(ctx, 31, 0x1A5928u);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x1A5920u, 0x1A5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5928u;
label_1a5928:
    // 0x1a5928: 0x8e4401e8  lw          $a0, 0x1E8($s2)
    ctx->pc = 0x1a5928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x1a592c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A592Cu;
    {
        const bool branch_taken_0x1a592c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A592Cu;
        // 0x1a5930: 0x32130001  andi        $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a592c) {
            ctx->pc = 0x1A593Cu;
            goto label_1a593c;
        }
    }
    ctx->pc = 0x1A5934u;
    // 0x1a5934: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x1A5934u;
    SET_GPR_U32(ctx, 31, 0x1A593Cu);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x1A5934u, 0x1A593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A593Cu;
label_1a593c:
    // 0x1a593c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1a593cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a5940: 0x265001ec  addiu       $s0, $s2, 0x1EC
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 492));
    // 0x1a5944: 0x0  nop
    ctx->pc = 0x1a5944u;
    // NOP
label_1a5948:
    // 0x1a5948: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a5948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a594c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A594Cu;
    {
        const bool branch_taken_0x1a594c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A594Cu;
        // 0x1a5950: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a594c) {
            ctx->pc = 0x1A595Cu;
            goto label_1a595c;
        }
    }
    ctx->pc = 0x1A5954u;
    // 0x1a5954: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x1A5954u;
    SET_GPR_U32(ctx, 31, 0x1A595Cu);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x1A5954u, 0x1A595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A595Cu;
label_1a595c:
    // 0x1a595c: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A595Cu;
    {
        const bool branch_taken_0x1a595c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A5960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A595Cu;
        // 0x1a5960: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a595c) {
            ctx->pc = 0x1A5948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5948;
        }
    }
    ctx->pc = 0x1A5964u;
    // 0x1a5964: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5964u;
    {
        const bool branch_taken_0x1a5964 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5964u;
        // 0x1a5968: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5964) {
            ctx->pc = 0x1A5978u;
            goto label_1a5978;
        }
    }
    ctx->pc = 0x1A596Cu;
    // 0x1a596c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1A596Cu;
    SET_GPR_U32(ctx, 31, 0x1A5974u);
    ctx->pc = 0x1A5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A596Cu;
    // 0x1a5970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1A596Cu, 0x1A5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5974u;
label_1a5974:
    // 0x1a5974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5978:
    // 0x1a5978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a597c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a597cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5980: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5988: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5988u;
        // 0x1a598c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5990u;
}
