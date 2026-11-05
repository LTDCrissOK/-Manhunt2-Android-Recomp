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

// Function: sub_00146070
// Address: 0x146070 - 0x146120
void sub_00146070_0x146070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146070_0x146070");
#endif

    switch (ctx->pc) {
        case 0x146070u: goto label_146070;
        case 0x146074u: goto label_146074;
        case 0x146078u: goto label_146078;
        case 0x14607cu: goto label_14607c;
        case 0x146080u: goto label_146080;
        case 0x146084u: goto label_146084;
        case 0x146088u: goto label_146088;
        case 0x14608cu: goto label_14608c;
        case 0x146090u: goto label_146090;
        case 0x146094u: goto label_146094;
        case 0x146098u: goto label_146098;
        case 0x14609cu: goto label_14609c;
        case 0x1460a0u: goto label_1460a0;
        case 0x1460a4u: goto label_1460a4;
        case 0x1460a8u: goto label_1460a8;
        case 0x1460acu: goto label_1460ac;
        case 0x1460b0u: goto label_1460b0;
        case 0x1460b4u: goto label_1460b4;
        case 0x1460b8u: goto label_1460b8;
        case 0x1460bcu: goto label_1460bc;
        case 0x1460c0u: goto label_1460c0;
        case 0x1460c4u: goto label_1460c4;
        case 0x1460c8u: goto label_1460c8;
        case 0x1460ccu: goto label_1460cc;
        case 0x1460d0u: goto label_1460d0;
        case 0x1460d4u: goto label_1460d4;
        case 0x1460d8u: goto label_1460d8;
        case 0x1460dcu: goto label_1460dc;
        case 0x1460e0u: goto label_1460e0;
        case 0x1460e4u: goto label_1460e4;
        case 0x1460e8u: goto label_1460e8;
        case 0x1460ecu: goto label_1460ec;
        case 0x1460f0u: goto label_1460f0;
        case 0x1460f4u: goto label_1460f4;
        case 0x1460f8u: goto label_1460f8;
        case 0x1460fcu: goto label_1460fc;
        case 0x146100u: goto label_146100;
        case 0x146104u: goto label_146104;
        case 0x146108u: goto label_146108;
        case 0x14610cu: goto label_14610c;
        case 0x146110u: goto label_146110;
        case 0x146114u: goto label_146114;
        case 0x146118u: goto label_146118;
        case 0x14611cu: goto label_14611c;
        default: break;
    }

    ctx->pc = 0x146070u;

label_146070:
    // 0x146070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_146074:
    // 0x146074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_146078:
    // 0x146078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x146078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14607c:
    // 0x14607c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14607cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_146080:
    // 0x146080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_146084:
    // 0x146084: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x146084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_146088:
    // 0x146088: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_14608c:
    if (ctx->pc == 0x14608Cu) {
        ctx->pc = 0x14608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146088u;
        // 0x14608c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146090u;
        goto label_146090;
    }
    ctx->pc = 0x146088u;
    {
        const bool branch_taken_0x146088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146088) {
            ctx->pc = 0x14608Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146088u;
            // 0x14608c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146110u;
            goto label_146110;
        }
    }
    ctx->pc = 0x146090u;
label_146090:
    // 0x146090: 0xc04db02  jal         func_136C08
label_146094:
    if (ctx->pc == 0x146094u) {
        ctx->pc = 0x146094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146090u;
        // 0x146094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146098u;
        goto label_146098;
    }
    ctx->pc = 0x146090u;
    SET_GPR_U32(ctx, 31, 0x146098u);
    ctx->pc = 0x146094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146090u;
    // 0x146094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x146090u, 0x146098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146098u;
label_146098:
    // 0x146098: 0x10000003  b           . + 4 + (0x3 << 2)
label_14609c:
    if (ctx->pc == 0x14609Cu) {
        ctx->pc = 0x14609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146098u;
        // 0x14609c: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1460A0u;
        goto label_1460a0;
    }
    ctx->pc = 0x146098u;
    {
        const bool branch_taken_0x146098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146098u;
        // 0x14609c: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146098) {
            ctx->pc = 0x1460A8u;
            goto label_1460a8;
        }
    }
    ctx->pc = 0x1460A0u;
label_1460a0:
    // 0x1460a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1460a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1460a4:
    // 0x1460a4: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x1460a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_1460a8:
    // 0x1460a8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1460a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1460ac:
    // 0x1460ac: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1460acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1460b0:
    // 0x1460b0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1460b4:
    if (ctx->pc == 0x1460B4u) {
        ctx->pc = 0x1460B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460B0u;
        // 0x1460b4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1460B8u;
        goto label_1460b8;
    }
    ctx->pc = 0x1460B0u;
    {
        const bool branch_taken_0x1460b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1460b0) {
            ctx->pc = 0x1460B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460B0u;
            // 0x1460b4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146100u;
            goto label_146100;
        }
    }
    ctx->pc = 0x1460B8u;
label_1460b8:
    // 0x1460b8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1460b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1460bc:
    // 0x1460bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1460bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1460c0:
    // 0x1460c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1460c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1460c4:
    // 0x1460c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1460c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1460c8:
    // 0x1460c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1460c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1460cc:
    // 0x1460cc: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_1460d0:
    if (ctx->pc == 0x1460D0u) {
        ctx->pc = 0x1460D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460CCu;
        // 0x1460d0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1460D4u;
        goto label_1460d4;
    }
    ctx->pc = 0x1460CCu;
    {
        const bool branch_taken_0x1460cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1460cc) {
            ctx->pc = 0x1460D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460CCu;
            // 0x1460d0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1460A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1460a0;
        }
    }
    ctx->pc = 0x1460D4u;
label_1460d4:
    // 0x1460d4: 0xc0518b6  jal         func_1462D8
label_1460d8:
    if (ctx->pc == 0x1460D8u) {
        ctx->pc = 0x1460D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460D4u;
        // 0x1460d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1460DCu;
        goto label_1460dc;
    }
    ctx->pc = 0x1460D4u;
    SET_GPR_U32(ctx, 31, 0x1460DCu);
    ctx->pc = 0x1460D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460D4u;
    // 0x1460d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1462D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1462D8u, 0x1460D4u, 0x1460DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460DCu;
label_1460dc:
    // 0x1460dc: 0x8e050560  lw          $a1, 0x560($s0)
    ctx->pc = 0x1460dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
label_1460e0:
    // 0x1460e0: 0xc04d80c  jal         func_136030
label_1460e4:
    if (ctx->pc == 0x1460E4u) {
        ctx->pc = 0x1460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460E0u;
        // 0x1460e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1460E8u;
        goto label_1460e8;
    }
    ctx->pc = 0x1460E0u;
    SET_GPR_U32(ctx, 31, 0x1460E8u);
    ctx->pc = 0x1460E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460E0u;
    // 0x1460e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x1460E0u, 0x1460E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460E8u;
label_1460e8:
    // 0x1460e8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1460e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1460ec:
    // 0x1460ec: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1460ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1460f0:
    // 0x1460f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1460f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1460f4:
    // 0x1460f4: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_1460f8:
    if (ctx->pc == 0x1460F8u) {
        ctx->pc = 0x1460F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460F4u;
        // 0x1460f8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1460FCu;
        goto label_1460fc;
    }
    ctx->pc = 0x1460F4u;
    {
        const bool branch_taken_0x1460f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1460f4) {
            ctx->pc = 0x1460F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460F4u;
            // 0x1460f8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1460A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1460a0;
        }
    }
    ctx->pc = 0x1460FCu;
label_1460fc:
    // 0x1460fc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1460fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_146100:
    // 0x146100: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_146104:
    // 0x146104: 0x40f809  jalr        $v0
label_146108:
    if (ctx->pc == 0x146108u) {
        ctx->pc = 0x146108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146104u;
        // 0x146108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14610Cu;
        goto label_14610c;
    }
    ctx->pc = 0x146104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14610Cu);
        ctx->pc = 0x146108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146104u;
        // 0x146108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146104u, 0x14610Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14610Cu;
label_14610c:
    // 0x14610c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14610cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_146110:
    // 0x146110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_146114:
    // 0x146114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_146118:
    // 0x146118: 0x3e00008  jr          $ra
label_14611c:
    if (ctx->pc == 0x14611Cu) {
        ctx->pc = 0x14611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146118u;
        // 0x14611c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146120u;
        goto label_fallthrough_0x146118;
    }
    ctx->pc = 0x146118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146118u;
        // 0x14611c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x146118:
    ctx->pc = 0x146120u;
}
