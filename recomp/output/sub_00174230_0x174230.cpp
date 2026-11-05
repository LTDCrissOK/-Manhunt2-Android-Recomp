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

// Function: sub_00174230
// Address: 0x174230 - 0x1742f0
void sub_00174230_0x174230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174230_0x174230");
#endif

    switch (ctx->pc) {
        case 0x174264u: goto label_174264;
        case 0x174280u: goto label_174280;
        case 0x1742a4u: goto label_1742a4;
        default: break;
    }

    ctx->pc = 0x174230u;

    // 0x174230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174234: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x174234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17423c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17423cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x174244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x174248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17424c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174250: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x174250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x174254: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x174254u;
    {
        const bool branch_taken_0x174254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x174258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174254u;
        // 0x174258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174254) {
            ctx->pc = 0x17426Cu;
            goto label_17426c;
        }
    }
    ctx->pc = 0x17425Cu;
    // 0x17425c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17425Cu;
    {
        const bool branch_taken_0x17425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17425Cu;
        // 0x174260: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17425c) {
            ctx->pc = 0x1742D4u;
            goto label_1742d4;
        }
    }
    ctx->pc = 0x174264u;
label_174264:
    // 0x174264: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x174264u;
    {
        const bool branch_taken_0x174264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174264u;
        // 0x174268: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174264) {
            ctx->pc = 0x1742D0u;
            goto label_1742d0;
        }
    }
    ctx->pc = 0x17426Cu;
label_17426c:
    // 0x17426c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17426cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174270: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x174270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x174274: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x174274u;
    {
        const bool branch_taken_0x174274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174274u;
        // 0x174278: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174274) {
            ctx->pc = 0x1742CCu;
            goto label_1742cc;
        }
    }
    ctx->pc = 0x17427Cu;
    // 0x17427c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_174280:
    // 0x174280: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x174280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x174284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174288: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x174288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17428c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17428Cu;
    {
        const bool branch_taken_0x17428c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x174290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17428Cu;
        // 0x174290: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17428c) {
            ctx->pc = 0x1742ACu;
            goto label_1742ac;
        }
    }
    ctx->pc = 0x174294u;
    // 0x174294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174298: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x174298u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17429c: 0xc04f8e6  jal         func_13E398
    ctx->pc = 0x17429Cu;
    SET_GPR_U32(ctx, 31, 0x1742A4u);
    ctx->pc = 0x1742A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17429Cu;
    // 0x1742a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x17429Cu, 0x1742A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742A4u;
label_1742a4:
    // 0x1742a4: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1742A4u;
    {
        const bool branch_taken_0x1742a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1742a4) {
            ctx->pc = 0x1742A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1742A4u;
            // 0x1742a8: 0xae300228  sw          $s0, 0x228($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174264;
        }
    }
    ctx->pc = 0x1742ACu;
label_1742ac:
    // 0x1742ac: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1742acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1742b0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1742b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1742b4: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x1742b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1742b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1742B8u;
    {
        const bool branch_taken_0x1742b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1742BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742B8u;
        // 0x1742bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742b8) {
            ctx->pc = 0x1742D0u;
            goto label_1742d0;
        }
    }
    ctx->pc = 0x1742C0u;
    // 0x1742c0: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x1742c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1742c4: 0x5662ffee  bnel        $s3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1742C4u;
    {
        const bool branch_taken_0x1742c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1742c4) {
            ctx->pc = 0x1742C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1742C4u;
            // 0x1742c8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174280;
        }
    }
    ctx->pc = 0x1742CCu;
label_1742cc:
    // 0x1742cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1742ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1742d0:
    // 0x1742d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1742d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1742d4:
    // 0x1742d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1742d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1742d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1742d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1742dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1742dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1742e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1742e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1742e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1742E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1742E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742E4u;
        // 0x1742e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1742E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1742ECu;
    // 0x1742ec: 0x0  nop
    ctx->pc = 0x1742ecu;
    // NOP
    ctx->pc = 0x1742f0u;
}
