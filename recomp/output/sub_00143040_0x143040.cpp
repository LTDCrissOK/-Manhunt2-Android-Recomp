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

// Function: sub_00143040
// Address: 0x143040 - 0x143148
void sub_00143040_0x143040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143040_0x143040");
#endif

    switch (ctx->pc) {
        case 0x143078u: goto label_143078;
        case 0x14307cu: goto label_14307c;
        case 0x1430a8u: goto label_1430a8;
        case 0x1430f0u: goto label_1430f0;
        case 0x143110u: goto label_143110;
        case 0x143120u: goto label_143120;
        default: break;
    }

    ctx->pc = 0x143040u;

    // 0x143040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143048: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14304c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14304cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143054: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x143054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143058: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x143058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14305c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x14305cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143060: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x143060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x143064: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x143064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x143068: 0xa2200b11  sb          $zero, 0xB11($s1)
    ctx->pc = 0x143068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2833), (uint8_t)GPR_U32(ctx, 0));
    // 0x14306c: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x14306cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
    // 0x143070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143070u;
    {
        const bool branch_taken_0x143070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143070u;
        // 0x143074: 0x3c140049  lui         $s4, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143070) {
            ctx->pc = 0x143080u;
            goto label_143080;
        }
    }
    ctx->pc = 0x143078u;
label_143078:
    // 0x143078: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x143078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14307c:
    // 0x14307c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14307cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143080:
    // 0x143080: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x143080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x143084: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x143084u;
    {
        const bool branch_taken_0x143084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143084u;
        // 0x143088: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143084) {
            ctx->pc = 0x1430D4u;
            goto label_1430d4;
        }
    }
    ctx->pc = 0x14308Cu;
    // 0x14308c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x143090: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143094: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x143094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143098: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x143098u;
    {
        const bool branch_taken_0x143098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143098u;
        // 0x14309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143098) {
            ctx->pc = 0x143078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143078;
        }
    }
    ctx->pc = 0x1430A0u;
    // 0x1430a0: 0xc04e866  jal         func_13A198
    ctx->pc = 0x1430A0u;
    SET_GPR_U32(ctx, 31, 0x1430A8u);
    ctx->pc = 0x1430A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1430A0u;
    // 0x1430a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x1430A0u, 0x1430A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430A8u;
label_1430a8:
    // 0x1430a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1430a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1430ac: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1430ACu;
    {
        const bool branch_taken_0x1430ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1430B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430ACu;
        // 0x1430b0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430ac) {
            ctx->pc = 0x1430C4u;
            goto label_1430c4;
        }
    }
    ctx->pc = 0x1430B4u;
    // 0x1430b4: 0x92220b11  lbu         $v0, 0xB11($s1)
    ctx->pc = 0x1430b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2833)));
    // 0x1430b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1430b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1430bc: 0xa2220b11  sb          $v0, 0xB11($s1)
    ctx->pc = 0x1430bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2833), (uint8_t)GPR_U32(ctx, 2));
    // 0x1430c0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1430c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1430c4:
    // 0x1430c4: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x1430c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1430c8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1430c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1430cc: 0x1643ffeb  bne         $s2, $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1430CCu;
    {
        const bool branch_taken_0x1430cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1430D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430CCu;
        // 0x1430d0: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430cc) {
            ctx->pc = 0x14307Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14307c;
        }
    }
    ctx->pc = 0x1430D4u;
label_1430d4:
    // 0x1430d4: 0x8e220464  lw          $v0, 0x464($s1)
    ctx->pc = 0x1430d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x1430d8: 0x2664b060  addiu       $a0, $s3, -0x4FA0
    ctx->pc = 0x1430d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946912));
    // 0x1430dc: 0x8e260ab0  lw          $a2, 0xAB0($s1)
    ctx->pc = 0x1430dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x1430e0: 0x26878738  addiu       $a3, $s4, -0x78C8
    ctx->pc = 0x1430e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936376));
    // 0x1430e4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1430e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1430e8: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x1430E8u;
    SET_GPR_U32(ctx, 31, 0x1430F0u);
    ctx->pc = 0x1430ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1430E8u;
    // 0x1430ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x1430E8u, 0x1430F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430F0u;
label_1430f0:
    // 0x1430f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1430f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430f4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1430F4u;
    {
        const bool branch_taken_0x1430f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1430f4) {
            ctx->pc = 0x1430F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1430F4u;
            // 0x1430f8: 0xae320b20  sw          $s2, 0xB20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2848), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143124u;
            goto label_143124;
        }
    }
    ctx->pc = 0x1430FCu;
    // 0x1430fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1430fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143104: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x143104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x143108: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x143108u;
    SET_GPR_U32(ctx, 31, 0x143110u);
    ctx->pc = 0x14310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143108u;
    // 0x14310c: 0x30520001  andi        $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x143108u, 0x143110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143110u;
label_143110:
    // 0x143110: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x143110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x143114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143118: 0xc042128  jal         func_1084A0
    ctx->pc = 0x143118u;
    SET_GPR_U32(ctx, 31, 0x143120u);
    ctx->pc = 0x14311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143118u;
    // 0x14311c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x143118u, 0x143120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143120u;
label_143120:
    // 0x143120: 0xae320b20  sw          $s2, 0xB20($s1)
    ctx->pc = 0x143120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2848), GPR_U32(ctx, 18));
label_143124:
    // 0x143124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14312c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14312cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143130: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x143130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143134: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x143134u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143138: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x143138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14313c: 0x3e00008  jr          $ra
    ctx->pc = 0x14313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14313Cu;
        // 0x143140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14313Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143144u;
    // 0x143144: 0x0  nop
    ctx->pc = 0x143144u;
    // NOP
    ctx->pc = 0x143148u;
}
