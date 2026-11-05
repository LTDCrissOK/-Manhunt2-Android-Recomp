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

// Function: sub_0025C808
// Address: 0x25c808 - 0x25c9b0
void sub_0025C808_0x25c808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C808_0x25c808");
#endif

    switch (ctx->pc) {
        case 0x25c848u: goto label_25c848;
        case 0x25c878u: goto label_25c878;
        case 0x25c898u: goto label_25c898;
        case 0x25c8f0u: goto label_25c8f0;
        default: break;
    }

    ctx->pc = 0x25c808u;

    // 0x25c808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25c808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25c80c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x25c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x25c810: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25c810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25c814: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25c814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c818: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25c818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25c820: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25c820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25c824: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25c824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c828: 0x8c443d90  lw          $a0, 0x3D90($v0)
    ctx->pc = 0x25c828u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4B3D90u));
    // 0x25c82c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25c82cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c830: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25c830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25c834: 0x24423d90  addiu       $v0, $v0, 0x3D90
    ctx->pc = 0x25c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15760));
    // 0x25c838: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x25C838u;
    {
        const bool branch_taken_0x25c838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C838u;
        // 0x25c83c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c838) {
            ctx->pc = 0x25C864u;
            goto label_25c864;
        }
    }
    ctx->pc = 0x25C840u;
    // 0x25c840: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x25c840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25c844: 0x0  nop
    ctx->pc = 0x25c844u;
    // NOP
label_25c848:
    // 0x25c848: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x25c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x25c84c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C84Cu;
    {
        const bool branch_taken_0x25c84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x25C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C84Cu;
        // 0x25c850: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c84c) {
            ctx->pc = 0x25C85Cu;
            goto label_25c85c;
        }
    }
    ctx->pc = 0x25C854u;
    // 0x25c854: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C854u;
    {
        const bool branch_taken_0x25c854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C854u;
        // 0x25c858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c854) {
            ctx->pc = 0x25C868u;
            goto label_25c868;
        }
    }
    ctx->pc = 0x25C85Cu;
label_25c85c:
    // 0x25c85c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25C85Cu;
    {
        const bool branch_taken_0x25c85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x25C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C85Cu;
        // 0x25c860: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c85c) {
            ctx->pc = 0x25C848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c848;
        }
    }
    ctx->pc = 0x25C864u;
label_25c864:
    // 0x25c864: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25c864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c868:
    // 0x25c868: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x25c868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25c86c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x25c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25c870: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x25C870u;
    SET_GPR_U32(ctx, 31, 0x25C878u);
    ctx->pc = 0x25C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C870u;
    // 0x25c874: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x25C870u, 0x25C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C878u;
label_25c878:
    // 0x25c878: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x25c878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25c87c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x25C87Cu;
    {
        const bool branch_taken_0x25c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C87Cu;
        // 0x25c880: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c87c) {
            ctx->pc = 0x25C974u;
            goto label_25c974;
        }
    }
    ctx->pc = 0x25C884u;
    // 0x25c884: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25c884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c888: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25c888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c88c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x25c88cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c890: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C890u;
    {
        const bool branch_taken_0x25c890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C890u;
        // 0x25c894: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c890) {
            ctx->pc = 0x25C8B0u;
            goto label_25c8b0;
        }
    }
    ctx->pc = 0x25C898u;
label_25c898:
    // 0x25c898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25c898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25c89c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x25c89cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c8a0: 0x0  nop
    ctx->pc = 0x25c8a0u;
    // NOP
    // 0x25c8a4: 0x0  nop
    ctx->pc = 0x25c8a4u;
    // NOP
    // 0x25c8a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25C8A8u;
    {
        const bool branch_taken_0x25c8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8A8u;
        // 0x25c8ac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8a8) {
            ctx->pc = 0x25C898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c898;
        }
    }
    ctx->pc = 0x25C8B0u;
label_25c8b0:
    // 0x25c8b0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x25c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25c8b4: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x25c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x25c8b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C8B8u;
    {
        const bool branch_taken_0x25c8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8B8u;
        // 0x25c8bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8b8) {
            ctx->pc = 0x25C8E0u;
            goto label_25c8e0;
        }
    }
    ctx->pc = 0x25C8C0u;
    // 0x25c8c0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25c8c4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x25c8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25c8c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x25c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x25c8cc: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x25c8ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x25c8d0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x25c8d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25c8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25c8d8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x25c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25c8dc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x25c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25c8e0:
    // 0x25c8e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25c8e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C8E4u;
    {
        const bool branch_taken_0x25c8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8E4u;
        // 0x25c8e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8e4) {
            ctx->pc = 0x25C900u;
            goto label_25c900;
        }
    }
    ctx->pc = 0x25C8ECu;
    // 0x25c8ec: 0x0  nop
    ctx->pc = 0x25c8ecu;
    // NOP
label_25c8f0:
    // 0x25c8f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25c8f4: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x25c8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x25c8f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C8F8u;
    {
        const bool branch_taken_0x25c8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8F8u;
        // 0x25c8fc: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c8f8) {
            ctx->pc = 0x25C910u;
            goto label_25c910;
        }
    }
    ctx->pc = 0x25C900u;
label_25c900:
    // 0x25c900: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x25c900u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c904: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25C904u;
    {
        const bool branch_taken_0x25c904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C904u;
        // 0x25c908: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c904) {
            ctx->pc = 0x25C8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c8f0;
        }
    }
    ctx->pc = 0x25C90Cu;
    // 0x25c90c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x25c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_25c910:
    // 0x25c910: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x25c910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x25c914: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25C914u;
    {
        const bool branch_taken_0x25c914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C914u;
        // 0x25c918: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c914) {
            ctx->pc = 0x25C93Cu;
            goto label_25c93c;
        }
    }
    ctx->pc = 0x25C91Cu;
    // 0x25c91c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25c920: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x25c920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25c924: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x25c924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x25c928: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x25c928u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x25c92c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x25c92cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25c930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25c930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25c934: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x25c934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25c938: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x25c938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25c93c:
    // 0x25c93c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x25c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x25c940: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25c944: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x25c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c948: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x25c948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25c94c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c950: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25c950u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x25c954: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x25c954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25c958: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x25c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c95c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c95cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25c960: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25c960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25c964: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x25c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c968: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x25c968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x25c96c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x25c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c970: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x25c970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_25c974:
    // 0x25c974: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25c974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25c978: 0xd32021  addu        $a0, $a2, $s3
    ctx->pc = 0x25c978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x25c97c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25c980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25c980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25c988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c98c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x25c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x25c990: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25c990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c994: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25c994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25c998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25c998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25c99c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25c99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c9a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x25c9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9A4u;
        // 0x25c9a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C9ACu;
    // 0x25c9ac: 0x0  nop
    ctx->pc = 0x25c9acu;
    // NOP
    ctx->pc = 0x25c9b0u;
}
