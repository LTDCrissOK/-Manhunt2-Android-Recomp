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

// Function: sub_0013C130
// Address: 0x13c130 - 0x13c1b8
void sub_0013C130_0x13c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C130_0x13c130");
#endif

    switch (ctx->pc) {
        case 0x13c130u: goto label_13c130;
        case 0x13c134u: goto label_13c134;
        case 0x13c138u: goto label_13c138;
        case 0x13c13cu: goto label_13c13c;
        case 0x13c140u: goto label_13c140;
        case 0x13c144u: goto label_13c144;
        case 0x13c148u: goto label_13c148;
        case 0x13c14cu: goto label_13c14c;
        case 0x13c150u: goto label_13c150;
        case 0x13c154u: goto label_13c154;
        case 0x13c158u: goto label_13c158;
        case 0x13c15cu: goto label_13c15c;
        case 0x13c160u: goto label_13c160;
        case 0x13c164u: goto label_13c164;
        case 0x13c168u: goto label_13c168;
        case 0x13c16cu: goto label_13c16c;
        case 0x13c170u: goto label_13c170;
        case 0x13c174u: goto label_13c174;
        case 0x13c178u: goto label_13c178;
        case 0x13c17cu: goto label_13c17c;
        case 0x13c180u: goto label_13c180;
        case 0x13c184u: goto label_13c184;
        case 0x13c188u: goto label_13c188;
        case 0x13c18cu: goto label_13c18c;
        case 0x13c190u: goto label_13c190;
        case 0x13c194u: goto label_13c194;
        case 0x13c198u: goto label_13c198;
        case 0x13c19cu: goto label_13c19c;
        case 0x13c1a0u: goto label_13c1a0;
        case 0x13c1a4u: goto label_13c1a4;
        case 0x13c1a8u: goto label_13c1a8;
        case 0x13c1acu: goto label_13c1ac;
        case 0x13c1b0u: goto label_13c1b0;
        case 0x13c1b4u: goto label_13c1b4;
        default: break;
    }

    ctx->pc = 0x13c130u;

label_13c130:
    // 0x13c130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c134:
    // 0x13c134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c138:
    // 0x13c138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c13c:
    // 0x13c13c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13c140:
    // 0x13c140: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13c144:
    // 0x13c144: 0x908202a8  lbu         $v0, 0x2A8($a0)
    ctx->pc = 0x13c144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 680)));
label_13c148:
    // 0x13c148: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_13c14c:
    if (ctx->pc == 0x13C14Cu) {
        ctx->pc = 0x13C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C148u;
        // 0x13c14c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C150u;
        goto label_13c150;
    }
    ctx->pc = 0x13C148u;
    {
        const bool branch_taken_0x13c148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C148u;
        // 0x13c14c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c148) {
            ctx->pc = 0x13C1A0u;
            goto label_13c1a0;
        }
    }
    ctx->pc = 0x13C150u;
label_13c150:
    // 0x13c150: 0x24920228  addiu       $s2, $a0, 0x228
    ctx->pc = 0x13c150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_13c154:
    // 0x13c154: 0x10000003  b           . + 4 + (0x3 << 2)
label_13c158:
    if (ctx->pc == 0x13C158u) {
        ctx->pc = 0x13C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C154u;
        // 0x13c158: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C15Cu;
        goto label_13c15c;
    }
    ctx->pc = 0x13C154u;
    {
        const bool branch_taken_0x13c154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C154u;
        // 0x13c158: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c154) {
            ctx->pc = 0x13C164u;
            goto label_13c164;
        }
    }
    ctx->pc = 0x13C15Cu;
label_13c15c:
    // 0x13c15c: 0x0  nop
    ctx->pc = 0x13c15cu;
    // NOP
label_13c160:
    // 0x13c160: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13c160u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13c164:
    // 0x13c164: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x13c164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_13c168:
    // 0x13c168: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_13c16c:
    if (ctx->pc == 0x13C16Cu) {
        ctx->pc = 0x13C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C168u;
        // 0x13c16c: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C170u;
        goto label_13c170;
    }
    ctx->pc = 0x13C168u;
    {
        const bool branch_taken_0x13c168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C168u;
        // 0x13c16c: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c168) {
            ctx->pc = 0x13C1A0u;
            goto label_13c1a0;
        }
    }
    ctx->pc = 0x13C170u;
label_13c170:
    // 0x13c170: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13c174:
    // 0x13c174: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13c178:
    // 0x13c178: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
label_13c17c:
    if (ctx->pc == 0x13C17Cu) {
        ctx->pc = 0x13C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C178u;
        // 0x13c17c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C180u;
        goto label_13c180;
    }
    ctx->pc = 0x13C178u;
    {
        const bool branch_taken_0x13c178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C178u;
        // 0x13c17c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c178) {
            ctx->pc = 0x13C160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c160;
        }
    }
    ctx->pc = 0x13C180u;
label_13c180:
    // 0x13c180: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x13c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_13c184:
    // 0x13c184: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x13c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_13c188:
    // 0x13c188: 0x60f809  jalr        $v1
label_13c18c:
    if (ctx->pc == 0x13C18Cu) {
        ctx->pc = 0x13C190u;
        goto label_13c190;
    }
    ctx->pc = 0x13C188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C190u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C188u, 0x13C190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C190u;
label_13c190:
    // 0x13c190: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x13c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_13c194:
    // 0x13c194: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13c194u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13c198:
    // 0x13c198: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
label_13c19c:
    if (ctx->pc == 0x13C19Cu) {
        ctx->pc = 0x13C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C198u;
        // 0x13c19c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C1A0u;
        goto label_13c1a0;
    }
    ctx->pc = 0x13C198u;
    {
        const bool branch_taken_0x13c198 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C198u;
        // 0x13c19c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c198) {
            ctx->pc = 0x13C160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c160;
        }
    }
    ctx->pc = 0x13C1A0u;
label_13c1a0:
    // 0x13c1a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c1a4:
    // 0x13c1a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c1a8:
    // 0x13c1a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13c1a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c1ac:
    // 0x13c1ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13c1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13c1b0:
    // 0x13c1b0: 0x3e00008  jr          $ra
label_13c1b4:
    if (ctx->pc == 0x13C1B4u) {
        ctx->pc = 0x13C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1B0u;
        // 0x13c1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C1B8u;
        goto label_fallthrough_0x13c1b0;
    }
    ctx->pc = 0x13C1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1B0u;
        // 0x13c1b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c1b0:
    ctx->pc = 0x13C1B8u;
}
