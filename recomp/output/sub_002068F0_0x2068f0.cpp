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

// Function: sub_002068F0
// Address: 0x2068f0 - 0x206978
void sub_002068F0_0x2068f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002068F0_0x2068f0");
#endif

    switch (ctx->pc) {
        case 0x2068f0u: goto label_2068f0;
        case 0x2068f4u: goto label_2068f4;
        case 0x2068f8u: goto label_2068f8;
        case 0x2068fcu: goto label_2068fc;
        case 0x206900u: goto label_206900;
        case 0x206904u: goto label_206904;
        case 0x206908u: goto label_206908;
        case 0x20690cu: goto label_20690c;
        case 0x206910u: goto label_206910;
        case 0x206914u: goto label_206914;
        case 0x206918u: goto label_206918;
        case 0x20691cu: goto label_20691c;
        case 0x206920u: goto label_206920;
        case 0x206924u: goto label_206924;
        case 0x206928u: goto label_206928;
        case 0x20692cu: goto label_20692c;
        case 0x206930u: goto label_206930;
        case 0x206934u: goto label_206934;
        case 0x206938u: goto label_206938;
        case 0x20693cu: goto label_20693c;
        case 0x206940u: goto label_206940;
        case 0x206944u: goto label_206944;
        case 0x206948u: goto label_206948;
        case 0x20694cu: goto label_20694c;
        case 0x206950u: goto label_206950;
        case 0x206954u: goto label_206954;
        case 0x206958u: goto label_206958;
        case 0x20695cu: goto label_20695c;
        case 0x206960u: goto label_206960;
        case 0x206964u: goto label_206964;
        case 0x206968u: goto label_206968;
        case 0x20696cu: goto label_20696c;
        case 0x206970u: goto label_206970;
        case 0x206974u: goto label_206974;
        default: break;
    }

    ctx->pc = 0x2068f0u;

label_2068f0:
    // 0x2068f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2068f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2068f4:
    // 0x2068f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2068f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2068f8:
    // 0x2068f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2068f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2068fc:
    // 0x2068fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2068fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206900:
    // 0x206900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_206904:
    // 0x206904: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x206904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
label_206908:
    // 0x206908: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_20690c:
    if (ctx->pc == 0x20690Cu) {
        ctx->pc = 0x20690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206908u;
        // 0x20690c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206910u;
        goto label_206910;
    }
    ctx->pc = 0x206908u;
    {
        const bool branch_taken_0x206908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206908u;
        // 0x20690c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206908) {
            ctx->pc = 0x206960u;
            goto label_206960;
        }
    }
    ctx->pc = 0x206910u;
label_206910:
    // 0x206910: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x206910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_206914:
    // 0x206914: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_206918:
    if (ctx->pc == 0x206918u) {
        ctx->pc = 0x206918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206914u;
        // 0x206918: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20691Cu;
        goto label_20691c;
    }
    ctx->pc = 0x206914u;
    {
        const bool branch_taken_0x206914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206914) {
            ctx->pc = 0x206918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206914u;
            // 0x206918: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206924u;
            goto label_206924;
        }
    }
    ctx->pc = 0x20691Cu;
label_20691c:
    // 0x20691c: 0x10000010  b           . + 4 + (0x10 << 2)
label_206920:
    if (ctx->pc == 0x206920u) {
        ctx->pc = 0x206920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20691Cu;
        // 0x206920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206924u;
        goto label_206924;
    }
    ctx->pc = 0x20691Cu;
    {
        const bool branch_taken_0x20691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20691Cu;
        // 0x206920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20691c) {
            ctx->pc = 0x206960u;
            goto label_206960;
        }
    }
    ctx->pc = 0x206924u;
label_206924:
    // 0x206924: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_206928:
    // 0x206928: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x206928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_20692c:
    // 0x20692c: 0x40f809  jalr        $v0
label_206930:
    if (ctx->pc == 0x206930u) {
        ctx->pc = 0x206930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20692Cu;
        // 0x206930: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206934u;
        goto label_206934;
    }
    ctx->pc = 0x20692Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206934u);
        ctx->pc = 0x206930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20692Cu;
        // 0x206930: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20692Cu, 0x206934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206934u;
label_206934:
    // 0x206934: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_206938:
    if (ctx->pc == 0x206938u) {
        ctx->pc = 0x206938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206934u;
        // 0x206938: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20693Cu;
        goto label_20693c;
    }
    ctx->pc = 0x206934u;
    {
        const bool branch_taken_0x206934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206934) {
            ctx->pc = 0x206938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206934u;
            // 0x206938: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20695Cu;
            goto label_20695c;
        }
    }
    ctx->pc = 0x20693Cu;
label_20693c:
    // 0x20693c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x20693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_206940:
    // 0x206940: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_206944:
    // 0x206944: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x206944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_206948:
    // 0x206948: 0x40f809  jalr        $v0
label_20694c:
    if (ctx->pc == 0x20694Cu) {
        ctx->pc = 0x206950u;
        goto label_206950;
    }
    ctx->pc = 0x206948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206950u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206948u, 0x206950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206950u;
label_206950:
    // 0x206950: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_206954:
    if (ctx->pc == 0x206954u) {
        ctx->pc = 0x206954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206950u;
        // 0x206954: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206958u;
        goto label_206958;
    }
    ctx->pc = 0x206950u;
    {
        const bool branch_taken_0x206950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206950u;
        // 0x206954: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206950) {
            ctx->pc = 0x206960u;
            goto label_206960;
        }
    }
    ctx->pc = 0x206958u;
label_206958:
    // 0x206958: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x206958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20695c:
    // 0x20695c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20695cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206960:
    // 0x206960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206964:
    // 0x206964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_206968:
    // 0x206968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20696c:
    // 0x20696c: 0x3e00008  jr          $ra
label_206970:
    if (ctx->pc == 0x206970u) {
        ctx->pc = 0x206970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20696Cu;
        // 0x206970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206974u;
        goto label_206974;
    }
    ctx->pc = 0x20696Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20696Cu;
        // 0x206970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20696Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206974u;
label_206974:
    // 0x206974: 0x0  nop
    ctx->pc = 0x206974u;
    // NOP
    ctx->pc = 0x206978u;
}
