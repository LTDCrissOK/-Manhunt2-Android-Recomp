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

// Function: sub_0018C0D0
// Address: 0x18c0d0 - 0x18c150
void sub_0018C0D0_0x18c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C0D0_0x18c0d0");
#endif

    switch (ctx->pc) {
        case 0x18c0d0u: goto label_18c0d0;
        case 0x18c0d4u: goto label_18c0d4;
        case 0x18c0d8u: goto label_18c0d8;
        case 0x18c0dcu: goto label_18c0dc;
        case 0x18c0e0u: goto label_18c0e0;
        case 0x18c0e4u: goto label_18c0e4;
        case 0x18c0e8u: goto label_18c0e8;
        case 0x18c0ecu: goto label_18c0ec;
        case 0x18c0f0u: goto label_18c0f0;
        case 0x18c0f4u: goto label_18c0f4;
        case 0x18c0f8u: goto label_18c0f8;
        case 0x18c0fcu: goto label_18c0fc;
        case 0x18c100u: goto label_18c100;
        case 0x18c104u: goto label_18c104;
        case 0x18c108u: goto label_18c108;
        case 0x18c10cu: goto label_18c10c;
        case 0x18c110u: goto label_18c110;
        case 0x18c114u: goto label_18c114;
        case 0x18c118u: goto label_18c118;
        case 0x18c11cu: goto label_18c11c;
        case 0x18c120u: goto label_18c120;
        case 0x18c124u: goto label_18c124;
        case 0x18c128u: goto label_18c128;
        case 0x18c12cu: goto label_18c12c;
        case 0x18c130u: goto label_18c130;
        case 0x18c134u: goto label_18c134;
        case 0x18c138u: goto label_18c138;
        case 0x18c13cu: goto label_18c13c;
        case 0x18c140u: goto label_18c140;
        case 0x18c144u: goto label_18c144;
        case 0x18c148u: goto label_18c148;
        case 0x18c14cu: goto label_18c14c;
        default: break;
    }

    ctx->pc = 0x18c0d0u;

label_18c0d0:
    // 0x18c0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18c0d4:
    // 0x18c0d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x18c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_18c0d8:
    // 0x18c0d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18c0dc:
    // 0x18c0dc: 0x244211a0  addiu       $v0, $v0, 0x11A0
    ctx->pc = 0x18c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4512));
label_18c0e0:
    // 0x18c0e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18c0e4:
    // 0x18c0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c0e8:
    // 0x18c0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18c0ec:
    // 0x18c0ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_18c0f0:
    // 0x18c0f0: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x18c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_18c0f4:
    // 0x18c0f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18c0f8:
    if (ctx->pc == 0x18C0F8u) {
        ctx->pc = 0x18C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0F4u;
        // 0x18c0f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0FCu;
        goto label_18c0fc;
    }
    ctx->pc = 0x18C0F4u;
    {
        const bool branch_taken_0x18c0f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0F4u;
        // 0x18c0f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0f4) {
            ctx->pc = 0x18C10Cu;
            goto label_18c10c;
        }
    }
    ctx->pc = 0x18C0FCu;
label_18c0fc:
    // 0x18c0fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18c100:
    // 0x18c100: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18c104:
    // 0x18c104: 0x40f809  jalr        $v0
label_18c108:
    if (ctx->pc == 0x18C108u) {
        ctx->pc = 0x18C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C104u;
        // 0x18c108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C10Cu;
        goto label_18c10c;
    }
    ctx->pc = 0x18C104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C10Cu);
        ctx->pc = 0x18C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C104u;
        // 0x18c108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C104u, 0x18C10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C10Cu;
label_18c10c:
    // 0x18c10c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x18c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_18c110:
    // 0x18c110: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x18c110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_18c114:
    // 0x18c114: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x18c114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_18c118:
    // 0x18c118: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x18c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_18c11c:
    // 0x18c11c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x18c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_18c120:
    // 0x18c120: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x18c120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_18c124:
    // 0x18c124: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18c124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_18c128:
    // 0x18c128: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x18c128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_18c12c:
    // 0x18c12c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18c130:
    if (ctx->pc == 0x18C130u) {
        ctx->pc = 0x18C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C12Cu;
        // 0x18c130: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C134u;
        goto label_18c134;
    }
    ctx->pc = 0x18C12Cu;
    {
        const bool branch_taken_0x18c12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C12Cu;
        // 0x18c130: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c12c) {
            ctx->pc = 0x18C13Cu;
            goto label_18c13c;
        }
    }
    ctx->pc = 0x18C134u;
label_18c134:
    // 0x18c134: 0xc0f5222  jal         func_3D4888
label_18c138:
    if (ctx->pc == 0x18C138u) {
        ctx->pc = 0x18C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C134u;
        // 0x18c138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C13Cu;
        goto label_18c13c;
    }
    ctx->pc = 0x18C134u;
    SET_GPR_U32(ctx, 31, 0x18C13Cu);
    ctx->pc = 0x18C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C134u;
    // 0x18c138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x18C134u, 0x18C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C13Cu;
label_18c13c:
    // 0x18c13c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18c13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c140:
    // 0x18c140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18c140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18c144:
    // 0x18c144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18c144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c148:
    // 0x18c148: 0x3e00008  jr          $ra
label_18c14c:
    if (ctx->pc == 0x18C14Cu) {
        ctx->pc = 0x18C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C148u;
        // 0x18c14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C150u;
        goto label_fallthrough_0x18c148;
    }
    ctx->pc = 0x18C148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C148u;
        // 0x18c14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18c148:
    ctx->pc = 0x18C150u;
}
