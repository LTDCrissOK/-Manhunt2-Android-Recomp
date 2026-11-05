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

// Function: sub_001660B8
// Address: 0x1660b8 - 0x166188
void sub_001660B8_0x1660b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001660B8_0x1660b8");
#endif

    switch (ctx->pc) {
        case 0x1660f8u: goto label_1660f8;
        case 0x166108u: goto label_166108;
        case 0x166124u: goto label_166124;
        case 0x166130u: goto label_166130;
        case 0x16615cu: goto label_16615c;
        default: break;
    }

    ctx->pc = 0x1660b8u;

    // 0x1660b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1660b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1660bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1660bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1660c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1660c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1660c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1660c8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1660c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1660ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1660d0: 0x26d40308  addiu       $s4, $s6, 0x308
    ctx->pc = 0x1660d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 776));
    // 0x1660d4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1660d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1660d8: 0x3c150049  lui         $s5, 0x49
    ctx->pc = 0x1660d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)73 << 16));
    // 0x1660dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1660dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1660e0: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x1660e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1660e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1660e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1660e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1660e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1660ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1660ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1660f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1660f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1660f4: 0x779018  mult        $s2, $v1, $s7
    ctx->pc = 0x1660f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_1660f8:
    // 0x1660f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1660f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660fc: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x1660fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x166100: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x166100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x166104: 0x0  nop
    ctx->pc = 0x166104u;
    // NOP
label_166108:
    // 0x166108: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x166108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16610c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x16610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x166110: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x166110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166114: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x166114u;
    {
        const bool branch_taken_0x166114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166114u;
        // 0x166118: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166114) {
            ctx->pc = 0x166134u;
            goto label_166134;
        }
    }
    ctx->pc = 0x16611Cu;
    // 0x16611c: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x16611Cu;
    SET_GPR_U32(ctx, 31, 0x166124u);
    ctx->pc = 0x166120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16611Cu;
    // 0x166120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x16611Cu, 0x166124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166124u;
label_166124:
    // 0x166124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166128: 0xc042128  jal         func_1084A0
    ctx->pc = 0x166128u;
    SET_GPR_U32(ctx, 31, 0x166130u);
    ctx->pc = 0x16612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166128u;
    // 0x16612c: 0x26a48758  addiu       $a0, $s5, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x166128u, 0x166130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166130u;
label_166130:
    // 0x166130: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x166130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_166134:
    // 0x166134: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x166134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166138: 0x2e230006  sltiu       $v1, $s1, 0x6
    ctx->pc = 0x166138u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16613c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x16613Cu;
    {
        const bool branch_taken_0x16613c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16613Cu;
        // 0x166140: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16613c) {
            ctx->pc = 0x166108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166108;
        }
    }
    ctx->pc = 0x166144u;
    // 0x166144: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x166144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x166148: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x166148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x16614c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x16614Cu;
    {
        const bool branch_taken_0x16614c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16614Cu;
        // 0x166150: 0x779018  mult        $s2, $v1, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16614c) {
            ctx->pc = 0x1660F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1660f8;
        }
    }
    ctx->pc = 0x166154u;
    // 0x166154: 0xc059812  jal         func_166048
    ctx->pc = 0x166154u;
    SET_GPR_U32(ctx, 31, 0x16615Cu);
    ctx->pc = 0x166158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166154u;
    // 0x166158: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166048u, 0x166154u, 0x16615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16615Cu;
label_16615c:
    // 0x16615c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16615cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x166164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166168: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x166168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16616c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16616cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166170: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x166170u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x166174: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x166174u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166178: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x166178u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16617c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166180: 0x3e00008  jr          $ra
    ctx->pc = 0x166180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166180u;
        // 0x166184: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166188u;
}
