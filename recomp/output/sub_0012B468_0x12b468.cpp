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

// Function: sub_0012B468
// Address: 0x12b468 - 0x12b540
void sub_0012B468_0x12b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B468_0x12b468");
#endif

    switch (ctx->pc) {
        case 0x12b4a0u: goto label_12b4a0;
        case 0x12b4d0u: goto label_12b4d0;
        case 0x12b4f8u: goto label_12b4f8;
        default: break;
    }

    ctx->pc = 0x12b468u;

    // 0x12b468: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12b478: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12b47c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12b480: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12b484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12b488: 0x90820084  lbu         $v0, 0x84($a0)
    ctx->pc = 0x12b488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x12b48c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x12B48Cu;
    {
        const bool branch_taken_0x12b48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B48Cu;
        // 0x12b490: 0x24950004  addiu       $s5, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b48c) {
            ctx->pc = 0x12B51Cu;
            goto label_12b51c;
        }
    }
    ctx->pc = 0x12B494u;
    // 0x12b494: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12b494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b498: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12b49c: 0x0  nop
    ctx->pc = 0x12b49cu;
    // NOP
label_12b4a0:
    // 0x12b4a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x12b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12b4a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x12b4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b4a8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12B4A8u;
    {
        const bool branch_taken_0x12b4a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4A8u;
        // 0x12b4ac: 0x24730001  addiu       $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4a8) {
            ctx->pc = 0x12B50Cu;
            goto label_12b50c;
        }
    }
    ctx->pc = 0x12B4B0u;
    // 0x12b4b0: 0x92020084  lbu         $v0, 0x84($s0)
    ctx->pc = 0x12b4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x12b4b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12B4B4u;
    {
        const bool branch_taken_0x12b4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4B4u;
        // 0x12b4b8: 0x326300ff  andi        $v1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4b4) {
            ctx->pc = 0x12B510u;
            goto label_12b510;
        }
    }
    ctx->pc = 0x12B4BCu;
    // 0x12b4bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4c0: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x12b4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x12b4c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12b4c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b4c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x12b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12b4cc: 0x0  nop
    ctx->pc = 0x12b4ccu;
    // NOP
label_12b4d0:
    // 0x12b4d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x12b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12b4d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b4d8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B4D8u;
    {
        const bool branch_taken_0x12b4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4D8u;
        // 0x12b4dc: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4d8) {
            ctx->pc = 0x12B4FCu;
            goto label_12b4fc;
        }
    }
    ctx->pc = 0x12B4E0u;
    // 0x12b4e0: 0x920300c6  lbu         $v1, 0xC6($s0)
    ctx->pc = 0x12b4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x12b4e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4e8: 0x920200c7  lbu         $v0, 0xC7($s0)
    ctx->pc = 0x12b4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 199)));
    // 0x12b4ec: 0x283280a  movz        $a1, $s4, $v1
    ctx->pc = 0x12b4ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
    // 0x12b4f0: 0xc05f468  jal         func_17D1A0
    ctx->pc = 0x12B4F0u;
    SET_GPR_U32(ctx, 31, 0x12B4F8u);
    ctx->pc = 0x12B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B4F0u;
    // 0x12b4f4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D1A0u, 0x12B4F0u, 0x12B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4F8u;
label_12b4f8:
    // 0x12b4f8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x12b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b4fc:
    // 0x12b4fc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x12b4fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b500: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x12b500u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12b504: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x12B504u;
    {
        const bool branch_taken_0x12b504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B504u;
        // 0x12b508: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b504) {
            ctx->pc = 0x12B4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4d0;
        }
    }
    ctx->pc = 0x12B50Cu;
label_12b50c:
    // 0x12b50c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x12b50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_12b510:
    // 0x12b510: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x12b510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12b514: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x12B514u;
    {
        const bool branch_taken_0x12b514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B514u;
        // 0x12b518: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b514) {
            ctx->pc = 0x12B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b4a0;
        }
    }
    ctx->pc = 0x12B51Cu;
label_12b51c:
    // 0x12b51c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b524: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12b524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b528: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12b528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b52c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12b52cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b530: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12b530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12b534: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12b534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b538: 0x3e00008  jr          $ra
    ctx->pc = 0x12B538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B538u;
        // 0x12b53c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B540u;
}
