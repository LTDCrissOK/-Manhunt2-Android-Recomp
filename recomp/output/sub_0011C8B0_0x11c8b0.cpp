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

// Function: sub_0011C8B0
// Address: 0x11c8b0 - 0x11cad8
void sub_0011C8B0_0x11c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C8B0_0x11c8b0");
#endif

    switch (ctx->pc) {
        case 0x11c8b0u: goto label_11c8b0;
        case 0x11c8b4u: goto label_11c8b4;
        case 0x11c8b8u: goto label_11c8b8;
        case 0x11c8bcu: goto label_11c8bc;
        case 0x11c8c0u: goto label_11c8c0;
        case 0x11c8c4u: goto label_11c8c4;
        case 0x11c8c8u: goto label_11c8c8;
        case 0x11c8ccu: goto label_11c8cc;
        case 0x11c8d0u: goto label_11c8d0;
        case 0x11c8d4u: goto label_11c8d4;
        case 0x11c8d8u: goto label_11c8d8;
        case 0x11c8dcu: goto label_11c8dc;
        case 0x11c8e0u: goto label_11c8e0;
        case 0x11c8e4u: goto label_11c8e4;
        case 0x11c8e8u: goto label_11c8e8;
        case 0x11c8ecu: goto label_11c8ec;
        case 0x11c8f0u: goto label_11c8f0;
        case 0x11c8f4u: goto label_11c8f4;
        case 0x11c8f8u: goto label_11c8f8;
        case 0x11c8fcu: goto label_11c8fc;
        case 0x11c900u: goto label_11c900;
        case 0x11c904u: goto label_11c904;
        case 0x11c908u: goto label_11c908;
        case 0x11c90cu: goto label_11c90c;
        case 0x11c910u: goto label_11c910;
        case 0x11c914u: goto label_11c914;
        case 0x11c918u: goto label_11c918;
        case 0x11c91cu: goto label_11c91c;
        case 0x11c920u: goto label_11c920;
        case 0x11c924u: goto label_11c924;
        case 0x11c928u: goto label_11c928;
        case 0x11c92cu: goto label_11c92c;
        case 0x11c930u: goto label_11c930;
        case 0x11c934u: goto label_11c934;
        case 0x11c938u: goto label_11c938;
        case 0x11c93cu: goto label_11c93c;
        case 0x11c940u: goto label_11c940;
        case 0x11c944u: goto label_11c944;
        case 0x11c948u: goto label_11c948;
        case 0x11c94cu: goto label_11c94c;
        case 0x11c950u: goto label_11c950;
        case 0x11c954u: goto label_11c954;
        case 0x11c958u: goto label_11c958;
        case 0x11c95cu: goto label_11c95c;
        case 0x11c960u: goto label_11c960;
        case 0x11c964u: goto label_11c964;
        case 0x11c968u: goto label_11c968;
        case 0x11c96cu: goto label_11c96c;
        case 0x11c970u: goto label_11c970;
        case 0x11c974u: goto label_11c974;
        case 0x11c978u: goto label_11c978;
        case 0x11c97cu: goto label_11c97c;
        case 0x11c980u: goto label_11c980;
        case 0x11c984u: goto label_11c984;
        case 0x11c988u: goto label_11c988;
        case 0x11c98cu: goto label_11c98c;
        case 0x11c990u: goto label_11c990;
        case 0x11c994u: goto label_11c994;
        case 0x11c998u: goto label_11c998;
        case 0x11c99cu: goto label_11c99c;
        case 0x11c9a0u: goto label_11c9a0;
        case 0x11c9a4u: goto label_11c9a4;
        case 0x11c9a8u: goto label_11c9a8;
        case 0x11c9acu: goto label_11c9ac;
        case 0x11c9b0u: goto label_11c9b0;
        case 0x11c9b4u: goto label_11c9b4;
        case 0x11c9b8u: goto label_11c9b8;
        case 0x11c9bcu: goto label_11c9bc;
        case 0x11c9c0u: goto label_11c9c0;
        case 0x11c9c4u: goto label_11c9c4;
        case 0x11c9c8u: goto label_11c9c8;
        case 0x11c9ccu: goto label_11c9cc;
        case 0x11c9d0u: goto label_11c9d0;
        case 0x11c9d4u: goto label_11c9d4;
        case 0x11c9d8u: goto label_11c9d8;
        case 0x11c9dcu: goto label_11c9dc;
        case 0x11c9e0u: goto label_11c9e0;
        case 0x11c9e4u: goto label_11c9e4;
        case 0x11c9e8u: goto label_11c9e8;
        case 0x11c9ecu: goto label_11c9ec;
        case 0x11c9f0u: goto label_11c9f0;
        case 0x11c9f4u: goto label_11c9f4;
        case 0x11c9f8u: goto label_11c9f8;
        case 0x11c9fcu: goto label_11c9fc;
        case 0x11ca00u: goto label_11ca00;
        case 0x11ca04u: goto label_11ca04;
        case 0x11ca08u: goto label_11ca08;
        case 0x11ca0cu: goto label_11ca0c;
        case 0x11ca10u: goto label_11ca10;
        case 0x11ca14u: goto label_11ca14;
        case 0x11ca18u: goto label_11ca18;
        case 0x11ca1cu: goto label_11ca1c;
        case 0x11ca20u: goto label_11ca20;
        case 0x11ca24u: goto label_11ca24;
        case 0x11ca28u: goto label_11ca28;
        case 0x11ca2cu: goto label_11ca2c;
        case 0x11ca30u: goto label_11ca30;
        case 0x11ca34u: goto label_11ca34;
        case 0x11ca38u: goto label_11ca38;
        case 0x11ca3cu: goto label_11ca3c;
        case 0x11ca40u: goto label_11ca40;
        case 0x11ca44u: goto label_11ca44;
        case 0x11ca48u: goto label_11ca48;
        case 0x11ca4cu: goto label_11ca4c;
        case 0x11ca50u: goto label_11ca50;
        case 0x11ca54u: goto label_11ca54;
        case 0x11ca58u: goto label_11ca58;
        case 0x11ca5cu: goto label_11ca5c;
        case 0x11ca60u: goto label_11ca60;
        case 0x11ca64u: goto label_11ca64;
        case 0x11ca68u: goto label_11ca68;
        case 0x11ca6cu: goto label_11ca6c;
        case 0x11ca70u: goto label_11ca70;
        case 0x11ca74u: goto label_11ca74;
        case 0x11ca78u: goto label_11ca78;
        case 0x11ca7cu: goto label_11ca7c;
        case 0x11ca80u: goto label_11ca80;
        case 0x11ca84u: goto label_11ca84;
        case 0x11ca88u: goto label_11ca88;
        case 0x11ca8cu: goto label_11ca8c;
        case 0x11ca90u: goto label_11ca90;
        case 0x11ca94u: goto label_11ca94;
        case 0x11ca98u: goto label_11ca98;
        case 0x11ca9cu: goto label_11ca9c;
        case 0x11caa0u: goto label_11caa0;
        case 0x11caa4u: goto label_11caa4;
        case 0x11caa8u: goto label_11caa8;
        case 0x11caacu: goto label_11caac;
        case 0x11cab0u: goto label_11cab0;
        case 0x11cab4u: goto label_11cab4;
        case 0x11cab8u: goto label_11cab8;
        case 0x11cabcu: goto label_11cabc;
        case 0x11cac0u: goto label_11cac0;
        case 0x11cac4u: goto label_11cac4;
        case 0x11cac8u: goto label_11cac8;
        case 0x11caccu: goto label_11cacc;
        case 0x11cad0u: goto label_11cad0;
        case 0x11cad4u: goto label_11cad4;
        default: break;
    }

    ctx->pc = 0x11c8b0u;

label_11c8b0:
    // 0x11c8b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_11c8b4:
    // 0x11c8b4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x11c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_11c8b8:
    // 0x11c8b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_11c8bc:
    // 0x11c8bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11c8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_11c8c0:
    // 0x11c8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11c8c4:
    // 0x11c8c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11c8c8:
    // 0x11c8c8: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x11c8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
label_11c8cc:
    // 0x11c8cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11c8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_11c8d0:
    // 0x11c8d0: 0x3c120044  lui         $s2, 0x44
    ctx->pc = 0x11c8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)68 << 16));
label_11c8d4:
    // 0x11c8d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_11c8d8:
    // 0x11c8d8: 0x3c130044  lui         $s3, 0x44
    ctx->pc = 0x11c8d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
label_11c8dc:
    // 0x11c8dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x11c8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_11c8e0:
    // 0x11c8e0: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
label_11c8e4:
    // 0x11c8e4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_11c8e8:
    // 0x11c8e8: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x11c8e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
label_11c8ec:
    // 0x11c8ec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x11c8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_11c8f0:
    // 0x11c8f0: 0x3c160044  lui         $s6, 0x44
    ctx->pc = 0x11c8f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)68 << 16));
label_11c8f4:
    // 0x11c8f4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x11c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_11c8f8:
    // 0x11c8f8: 0x3c170044  lui         $s7, 0x44
    ctx->pc = 0x11c8f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)68 << 16));
label_11c8fc:
    // 0x11c8fc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x11c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_11c900:
    // 0x11c900: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x11c900u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_11c904:
    // 0x11c904: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x11c904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11c908:
    // 0x11c908: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x11c908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_11c90c:
    // 0x11c90c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x11c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_11c910:
    // 0x11c910: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x11c910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_11c914:
    // 0x11c914: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x11c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_11c918:
    // 0x11c918: 0x40f809  jalr        $v0
label_11c91c:
    if (ctx->pc == 0x11C91Cu) {
        ctx->pc = 0x11C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C918u;
        // 0x11c91c: 0x3c1e0044  lui         $fp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C920u;
        goto label_11c920;
    }
    ctx->pc = 0x11C918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C920u);
        ctx->pc = 0x11C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C918u;
        // 0x11c91c: 0x3c1e0044  lui         $fp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C918u, 0x11C920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C920u;
label_11c920:
    // 0x11c920: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11c924:
    // 0x11c924: 0xc0d7384  jal         func_35CE10
label_11c928:
    if (ctx->pc == 0x11C928u) {
        ctx->pc = 0x11C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C924u;
        // 0x11c928: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C92Cu;
        goto label_11c92c;
    }
    ctx->pc = 0x11C924u;
    SET_GPR_U32(ctx, 31, 0x11C92Cu);
    ctx->pc = 0x11C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C924u;
    // 0x11c928: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11C924u, 0x11C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C92Cu;
label_11c92c:
    // 0x11c92c: 0x10000053  b           . + 4 + (0x53 << 2)
label_11c930:
    if (ctx->pc == 0x11C930u) {
        ctx->pc = 0x11C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C92Cu;
        // 0x11c930: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C934u;
        goto label_11c934;
    }
    ctx->pc = 0x11C92Cu;
    {
        const bool branch_taken_0x11c92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C92Cu;
        // 0x11c930: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c92c) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11C934u;
label_11c934:
    // 0x11c934: 0x0  nop
    ctx->pc = 0x11c934u;
    // NOP
label_11c938:
    // 0x11c938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11c93c:
    // 0x11c93c: 0xc0d73cc  jal         func_35CF30
label_11c940:
    if (ctx->pc == 0x11C940u) {
        ctx->pc = 0x11C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C93Cu;
        // 0x11c940: 0x2445bd48  addiu       $a1, $v0, -0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C944u;
        goto label_11c944;
    }
    ctx->pc = 0x11C93Cu;
    SET_GPR_U32(ctx, 31, 0x11C944u);
    ctx->pc = 0x11C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C93Cu;
    // 0x11c940: 0x2445bd48  addiu       $a1, $v0, -0x42B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C93Cu, 0x11C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C944u;
label_11c944:
    // 0x11c944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c948:
    // 0x11c948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c94c:
    if (ctx->pc == 0x11C94Cu) {
        ctx->pc = 0x11C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C948u;
        // 0x11c94c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C950u;
        goto label_11c950;
    }
    ctx->pc = 0x11C948u;
    {
        const bool branch_taken_0x11c948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C948u;
        // 0x11c94c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c948) {
            ctx->pc = 0x11C960u;
            goto label_11c960;
        }
    }
    ctx->pc = 0x11C950u;
label_11c950:
    // 0x11c950: 0xc047452  jal         func_11D148
label_11c954:
    if (ctx->pc == 0x11C954u) {
        ctx->pc = 0x11C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C950u;
        // 0x11c954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C958u;
        goto label_11c958;
    }
    ctx->pc = 0x11C950u;
    SET_GPR_U32(ctx, 31, 0x11C958u);
    ctx->pc = 0x11C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C950u;
    // 0x11c954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D148u, 0x11C950u, 0x11C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C958u;
label_11c958:
    // 0x11c958: 0x10000048  b           . + 4 + (0x48 << 2)
label_11c95c:
    if (ctx->pc == 0x11C95Cu) {
        ctx->pc = 0x11C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C958u;
        // 0x11c95c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C960u;
        goto label_11c960;
    }
    ctx->pc = 0x11C958u;
    {
        const bool branch_taken_0x11c958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C958u;
        // 0x11c95c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c958) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11C960u;
label_11c960:
    // 0x11c960: 0xc0d73cc  jal         func_35CF30
label_11c964:
    if (ctx->pc == 0x11C964u) {
        ctx->pc = 0x11C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C960u;
        // 0x11c964: 0x27c5bd08  addiu       $a1, $fp, -0x42F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C968u;
        goto label_11c968;
    }
    ctx->pc = 0x11C960u;
    SET_GPR_U32(ctx, 31, 0x11C968u);
    ctx->pc = 0x11C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C960u;
    // 0x11c964: 0x27c5bd08  addiu       $a1, $fp, -0x42F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C960u, 0x11C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C968u;
label_11c968:
    // 0x11c968: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c96c:
    // 0x11c96c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c970:
    if (ctx->pc == 0x11C970u) {
        ctx->pc = 0x11C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C96Cu;
        // 0x11c970: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C974u;
        goto label_11c974;
    }
    ctx->pc = 0x11C96Cu;
    {
        const bool branch_taken_0x11c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C96Cu;
        // 0x11c970: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c96c) {
            ctx->pc = 0x11C984u;
            goto label_11c984;
        }
    }
    ctx->pc = 0x11C974u;
label_11c974:
    // 0x11c974: 0xc047462  jal         func_11D188
label_11c978:
    if (ctx->pc == 0x11C978u) {
        ctx->pc = 0x11C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C974u;
        // 0x11c978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C97Cu;
        goto label_11c97c;
    }
    ctx->pc = 0x11C974u;
    SET_GPR_U32(ctx, 31, 0x11C97Cu);
    ctx->pc = 0x11C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C974u;
    // 0x11c978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D188u, 0x11C974u, 0x11C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C97Cu;
label_11c97c:
    // 0x11c97c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_11c980:
    if (ctx->pc == 0x11C980u) {
        ctx->pc = 0x11C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C97Cu;
        // 0x11c980: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C984u;
        goto label_11c984;
    }
    ctx->pc = 0x11C97Cu;
    {
        const bool branch_taken_0x11c97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C97Cu;
        // 0x11c980: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c97c) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11C984u;
label_11c984:
    // 0x11c984: 0xc0d73cc  jal         func_35CF30
label_11c988:
    if (ctx->pc == 0x11C988u) {
        ctx->pc = 0x11C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C984u;
        // 0x11c988: 0x26e5bd50  addiu       $a1, $s7, -0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C98Cu;
        goto label_11c98c;
    }
    ctx->pc = 0x11C984u;
    SET_GPR_U32(ctx, 31, 0x11C98Cu);
    ctx->pc = 0x11C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C984u;
    // 0x11c988: 0x26e5bd50  addiu       $a1, $s7, -0x42B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C984u, 0x11C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C98Cu;
label_11c98c:
    // 0x11c98c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c990:
    // 0x11c990: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c994:
    if (ctx->pc == 0x11C994u) {
        ctx->pc = 0x11C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C990u;
        // 0x11c994: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C998u;
        goto label_11c998;
    }
    ctx->pc = 0x11C990u;
    {
        const bool branch_taken_0x11c990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C990u;
        // 0x11c994: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c990) {
            ctx->pc = 0x11C9A8u;
            goto label_11c9a8;
        }
    }
    ctx->pc = 0x11C998u;
label_11c998:
    // 0x11c998: 0xc047472  jal         func_11D1C8
label_11c99c:
    if (ctx->pc == 0x11C99Cu) {
        ctx->pc = 0x11C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C998u;
        // 0x11c99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9A0u;
        goto label_11c9a0;
    }
    ctx->pc = 0x11C998u;
    SET_GPR_U32(ctx, 31, 0x11C9A0u);
    ctx->pc = 0x11C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C998u;
    // 0x11c99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1C8u, 0x11C998u, 0x11C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9A0u;
label_11c9a0:
    // 0x11c9a0: 0x10000036  b           . + 4 + (0x36 << 2)
label_11c9a4:
    if (ctx->pc == 0x11C9A4u) {
        ctx->pc = 0x11C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9A0u;
        // 0x11c9a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9A8u;
        goto label_11c9a8;
    }
    ctx->pc = 0x11C9A0u;
    {
        const bool branch_taken_0x11c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9A0u;
        // 0x11c9a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9a0) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11C9A8u;
label_11c9a8:
    // 0x11c9a8: 0xc0d73cc  jal         func_35CF30
label_11c9ac:
    if (ctx->pc == 0x11C9ACu) {
        ctx->pc = 0x11C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9A8u;
        // 0x11c9ac: 0x26c5bd58  addiu       $a1, $s6, -0x42A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9B0u;
        goto label_11c9b0;
    }
    ctx->pc = 0x11C9A8u;
    SET_GPR_U32(ctx, 31, 0x11C9B0u);
    ctx->pc = 0x11C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9A8u;
    // 0x11c9ac: 0x26c5bd58  addiu       $a1, $s6, -0x42A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C9A8u, 0x11C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9B0u;
label_11c9b0:
    // 0x11c9b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c9b4:
    // 0x11c9b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c9b8:
    if (ctx->pc == 0x11C9B8u) {
        ctx->pc = 0x11C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9B4u;
        // 0x11c9b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9BCu;
        goto label_11c9bc;
    }
    ctx->pc = 0x11C9B4u;
    {
        const bool branch_taken_0x11c9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9B4u;
        // 0x11c9b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9b4) {
            ctx->pc = 0x11C9CCu;
            goto label_11c9cc;
        }
    }
    ctx->pc = 0x11C9BCu;
label_11c9bc:
    // 0x11c9bc: 0xc047482  jal         func_11D208
label_11c9c0:
    if (ctx->pc == 0x11C9C0u) {
        ctx->pc = 0x11C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9BCu;
        // 0x11c9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9C4u;
        goto label_11c9c4;
    }
    ctx->pc = 0x11C9BCu;
    SET_GPR_U32(ctx, 31, 0x11C9C4u);
    ctx->pc = 0x11C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9BCu;
    // 0x11c9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D208u, 0x11C9BCu, 0x11C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9C4u;
label_11c9c4:
    // 0x11c9c4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_11c9c8:
    if (ctx->pc == 0x11C9C8u) {
        ctx->pc = 0x11C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9C4u;
        // 0x11c9c8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9CCu;
        goto label_11c9cc;
    }
    ctx->pc = 0x11C9C4u;
    {
        const bool branch_taken_0x11c9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9C4u;
        // 0x11c9c8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9c4) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11C9CCu;
label_11c9cc:
    // 0x11c9cc: 0xc0d73cc  jal         func_35CF30
label_11c9d0:
    if (ctx->pc == 0x11C9D0u) {
        ctx->pc = 0x11C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9CCu;
        // 0x11c9d0: 0x26a5bd68  addiu       $a1, $s5, -0x4298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9D4u;
        goto label_11c9d4;
    }
    ctx->pc = 0x11C9CCu;
    SET_GPR_U32(ctx, 31, 0x11C9D4u);
    ctx->pc = 0x11C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9CCu;
    // 0x11c9d0: 0x26a5bd68  addiu       $a1, $s5, -0x4298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C9CCu, 0x11C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9D4u;
label_11c9d4:
    // 0x11c9d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c9d8:
    // 0x11c9d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c9dc:
    if (ctx->pc == 0x11C9DCu) {
        ctx->pc = 0x11C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9D8u;
        // 0x11c9dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9E0u;
        goto label_11c9e0;
    }
    ctx->pc = 0x11C9D8u;
    {
        const bool branch_taken_0x11c9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9D8u;
        // 0x11c9dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9d8) {
            ctx->pc = 0x11C9F0u;
            goto label_11c9f0;
        }
    }
    ctx->pc = 0x11C9E0u;
label_11c9e0:
    // 0x11c9e0: 0xc047492  jal         func_11D248
label_11c9e4:
    if (ctx->pc == 0x11C9E4u) {
        ctx->pc = 0x11C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9E0u;
        // 0x11c9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9E8u;
        goto label_11c9e8;
    }
    ctx->pc = 0x11C9E0u;
    SET_GPR_U32(ctx, 31, 0x11C9E8u);
    ctx->pc = 0x11C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9E0u;
    // 0x11c9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D248u, 0x11C9E0u, 0x11C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9E8u;
label_11c9e8:
    // 0x11c9e8: 0x10000024  b           . + 4 + (0x24 << 2)
label_11c9ec:
    if (ctx->pc == 0x11C9ECu) {
        ctx->pc = 0x11C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9E8u;
        // 0x11c9ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9F0u;
        goto label_11c9f0;
    }
    ctx->pc = 0x11C9E8u;
    {
        const bool branch_taken_0x11c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9E8u;
        // 0x11c9ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9e8) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11C9F0u;
label_11c9f0:
    // 0x11c9f0: 0xc0d73cc  jal         func_35CF30
label_11c9f4:
    if (ctx->pc == 0x11C9F4u) {
        ctx->pc = 0x11C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9F0u;
        // 0x11c9f4: 0x2685bd40  addiu       $a1, $s4, -0x42C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C9F8u;
        goto label_11c9f8;
    }
    ctx->pc = 0x11C9F0u;
    SET_GPR_U32(ctx, 31, 0x11C9F8u);
    ctx->pc = 0x11C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9F0u;
    // 0x11c9f4: 0x2685bd40  addiu       $a1, $s4, -0x42C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C9F0u, 0x11C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9F8u;
label_11c9f8:
    // 0x11c9f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c9fc:
    // 0x11c9fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11ca00:
    if (ctx->pc == 0x11CA00u) {
        ctx->pc = 0x11CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9FCu;
        // 0x11ca00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA04u;
        goto label_11ca04;
    }
    ctx->pc = 0x11C9FCu;
    {
        const bool branch_taken_0x11c9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9FCu;
        // 0x11ca00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9fc) {
            ctx->pc = 0x11CA14u;
            goto label_11ca14;
        }
    }
    ctx->pc = 0x11CA04u;
label_11ca04:
    // 0x11ca04: 0xc0474a2  jal         func_11D288
label_11ca08:
    if (ctx->pc == 0x11CA08u) {
        ctx->pc = 0x11CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA04u;
        // 0x11ca08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA0Cu;
        goto label_11ca0c;
    }
    ctx->pc = 0x11CA04u;
    SET_GPR_U32(ctx, 31, 0x11CA0Cu);
    ctx->pc = 0x11CA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA04u;
    // 0x11ca08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D288u, 0x11CA04u, 0x11CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA0Cu;
label_11ca0c:
    // 0x11ca0c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_11ca10:
    if (ctx->pc == 0x11CA10u) {
        ctx->pc = 0x11CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA0Cu;
        // 0x11ca10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA14u;
        goto label_11ca14;
    }
    ctx->pc = 0x11CA0Cu;
    {
        const bool branch_taken_0x11ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA0Cu;
        // 0x11ca10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca0c) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11CA14u;
label_11ca14:
    // 0x11ca14: 0xc0d73cc  jal         func_35CF30
label_11ca18:
    if (ctx->pc == 0x11CA18u) {
        ctx->pc = 0x11CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA14u;
        // 0x11ca18: 0x2665bd28  addiu       $a1, $s3, -0x42D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA1Cu;
        goto label_11ca1c;
    }
    ctx->pc = 0x11CA14u;
    SET_GPR_U32(ctx, 31, 0x11CA1Cu);
    ctx->pc = 0x11CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA14u;
    // 0x11ca18: 0x2665bd28  addiu       $a1, $s3, -0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11CA14u, 0x11CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA1Cu;
label_11ca1c:
    // 0x11ca1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11ca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11ca20:
    // 0x11ca20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11ca24:
    if (ctx->pc == 0x11CA24u) {
        ctx->pc = 0x11CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA20u;
        // 0x11ca24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA28u;
        goto label_11ca28;
    }
    ctx->pc = 0x11CA20u;
    {
        const bool branch_taken_0x11ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA20u;
        // 0x11ca24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca20) {
            ctx->pc = 0x11CA38u;
            goto label_11ca38;
        }
    }
    ctx->pc = 0x11CA28u;
label_11ca28:
    // 0x11ca28: 0xc0474b2  jal         func_11D2C8
label_11ca2c:
    if (ctx->pc == 0x11CA2Cu) {
        ctx->pc = 0x11CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA28u;
        // 0x11ca2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA30u;
        goto label_11ca30;
    }
    ctx->pc = 0x11CA28u;
    SET_GPR_U32(ctx, 31, 0x11CA30u);
    ctx->pc = 0x11CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA28u;
    // 0x11ca2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D2C8u, 0x11CA28u, 0x11CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA30u;
label_11ca30:
    // 0x11ca30: 0x10000012  b           . + 4 + (0x12 << 2)
label_11ca34:
    if (ctx->pc == 0x11CA34u) {
        ctx->pc = 0x11CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA30u;
        // 0x11ca34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA38u;
        goto label_11ca38;
    }
    ctx->pc = 0x11CA30u;
    {
        const bool branch_taken_0x11ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA30u;
        // 0x11ca34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca30) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11CA38u;
label_11ca38:
    // 0x11ca38: 0xc0d73cc  jal         func_35CF30
label_11ca3c:
    if (ctx->pc == 0x11CA3Cu) {
        ctx->pc = 0x11CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA38u;
        // 0x11ca3c: 0x2645bd70  addiu       $a1, $s2, -0x4290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA40u;
        goto label_11ca40;
    }
    ctx->pc = 0x11CA38u;
    SET_GPR_U32(ctx, 31, 0x11CA40u);
    ctx->pc = 0x11CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA38u;
    // 0x11ca3c: 0x2645bd70  addiu       $a1, $s2, -0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11CA38u, 0x11CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA40u;
label_11ca40:
    // 0x11ca40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11ca40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11ca44:
    // 0x11ca44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11ca48:
    if (ctx->pc == 0x11CA48u) {
        ctx->pc = 0x11CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA44u;
        // 0x11ca48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA4Cu;
        goto label_11ca4c;
    }
    ctx->pc = 0x11CA44u;
    {
        const bool branch_taken_0x11ca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA44u;
        // 0x11ca48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca44) {
            ctx->pc = 0x11CA5Cu;
            goto label_11ca5c;
        }
    }
    ctx->pc = 0x11CA4Cu;
label_11ca4c:
    // 0x11ca4c: 0xc0474c2  jal         func_11D308
label_11ca50:
    if (ctx->pc == 0x11CA50u) {
        ctx->pc = 0x11CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA4Cu;
        // 0x11ca50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA54u;
        goto label_11ca54;
    }
    ctx->pc = 0x11CA4Cu;
    SET_GPR_U32(ctx, 31, 0x11CA54u);
    ctx->pc = 0x11CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA4Cu;
    // 0x11ca50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D308u, 0x11CA4Cu, 0x11CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA54u;
label_11ca54:
    // 0x11ca54: 0x10000009  b           . + 4 + (0x9 << 2)
label_11ca58:
    if (ctx->pc == 0x11CA58u) {
        ctx->pc = 0x11CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA54u;
        // 0x11ca58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA5Cu;
        goto label_11ca5c;
    }
    ctx->pc = 0x11CA54u;
    {
        const bool branch_taken_0x11ca54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA54u;
        // 0x11ca58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca54) {
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11CA5Cu;
label_11ca5c:
    // 0x11ca5c: 0xc0d73cc  jal         func_35CF30
label_11ca60:
    if (ctx->pc == 0x11CA60u) {
        ctx->pc = 0x11CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA5Cu;
        // 0x11ca60: 0x2625bd18  addiu       $a1, $s1, -0x42E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA64u;
        goto label_11ca64;
    }
    ctx->pc = 0x11CA5Cu;
    SET_GPR_U32(ctx, 31, 0x11CA64u);
    ctx->pc = 0x11CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA5Cu;
    // 0x11ca60: 0x2625bd18  addiu       $a1, $s1, -0x42E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11CA5Cu, 0x11CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA64u;
label_11ca64:
    // 0x11ca64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11ca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11ca68:
    // 0x11ca68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_11ca6c:
    if (ctx->pc == 0x11CA6Cu) {
        ctx->pc = 0x11CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA68u;
        // 0x11ca6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA70u;
        goto label_11ca70;
    }
    ctx->pc = 0x11CA68u;
    {
        const bool branch_taken_0x11ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ca68) {
            ctx->pc = 0x11CA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CA68u;
            // 0x11ca6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CA7Cu;
            goto label_11ca7c;
        }
    }
    ctx->pc = 0x11CA70u;
label_11ca70:
    // 0x11ca70: 0xc0474da  jal         func_11D368
label_11ca74:
    if (ctx->pc == 0x11CA74u) {
        ctx->pc = 0x11CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA70u;
        // 0x11ca74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA78u;
        goto label_11ca78;
    }
    ctx->pc = 0x11CA70u;
    SET_GPR_U32(ctx, 31, 0x11CA78u);
    ctx->pc = 0x11CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA70u;
    // 0x11ca74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D368u, 0x11CA70u, 0x11CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA78u;
label_11ca78:
    // 0x11ca78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11ca7c:
    // 0x11ca7c: 0xc09de68  jal         func_2779A0
label_11ca80:
    if (ctx->pc == 0x11CA80u) {
        ctx->pc = 0x11CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA7Cu;
        // 0x11ca80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA84u;
        goto label_11ca84;
    }
    ctx->pc = 0x11CA7Cu;
    SET_GPR_U32(ctx, 31, 0x11CA84u);
    ctx->pc = 0x11CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA7Cu;
    // 0x11ca80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x11CA7Cu, 0x11CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA84u;
label_11ca84:
    // 0x11ca84: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_11ca88:
    if (ctx->pc == 0x11CA88u) {
        ctx->pc = 0x11CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA84u;
        // 0x11ca88: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CA8Cu;
        goto label_11ca8c;
    }
    ctx->pc = 0x11CA84u;
    {
        const bool branch_taken_0x11ca84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA84u;
        // 0x11ca88: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca84) {
            ctx->pc = 0x11C938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c938;
        }
    }
    ctx->pc = 0x11CA8Cu;
label_11ca8c:
    // 0x11ca8c: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x11ca8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_11ca90:
    // 0x11ca90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11ca94:
    // 0x11ca94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11ca98:
    // 0x11ca98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_11ca9c:
    // 0x11ca9c: 0xc0d7412  jal         func_35D048
label_11caa0:
    if (ctx->pc == 0x11CAA0u) {
        ctx->pc = 0x11CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA9Cu;
        // 0x11caa0: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAA4u;
        goto label_11caa4;
    }
    ctx->pc = 0x11CA9Cu;
    SET_GPR_U32(ctx, 31, 0x11CAA4u);
    ctx->pc = 0x11CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA9Cu;
    // 0x11caa0: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11CA9Cu, 0x11CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAA4u;
label_11caa4:
    // 0x11caa4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11caa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11caa8:
    // 0x11caa8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11caa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_11caac:
    // 0x11caac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11caacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11cab0:
    // 0x11cab0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11cab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_11cab4:
    // 0x11cab4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11cab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11cab8:
    // 0x11cab8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_11cabc:
    // 0x11cabc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x11cabcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11cac0:
    // 0x11cac0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11cac0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_11cac4:
    // 0x11cac4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x11cac4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11cac8:
    // 0x11cac8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x11cac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_11cacc:
    // 0x11cacc: 0x3e00008  jr          $ra
label_11cad0:
    if (ctx->pc == 0x11CAD0u) {
        ctx->pc = 0x11CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CACCu;
        // 0x11cad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CAD4u;
        goto label_11cad4;
    }
    ctx->pc = 0x11CACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CACCu;
        // 0x11cad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CAD4u;
label_11cad4:
    // 0x11cad4: 0x0  nop
    ctx->pc = 0x11cad4u;
    // NOP
    ctx->pc = 0x11cad8u;
}
