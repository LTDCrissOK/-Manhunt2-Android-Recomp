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

// Function: sub_002D4FC8
// Address: 0x2d4fc8 - 0x2d5150
void sub_002D4FC8_0x2d4fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4FC8_0x2d4fc8");
#endif

    switch (ctx->pc) {
        case 0x2d4ffcu: goto label_2d4ffc;
        case 0x2d500cu: goto label_2d500c;
        case 0x2d501cu: goto label_2d501c;
        case 0x2d5028u: goto label_2d5028;
        case 0x2d5040u: goto label_2d5040;
        case 0x2d5078u: goto label_2d5078;
        case 0x2d5090u: goto label_2d5090;
        case 0x2d509cu: goto label_2d509c;
        case 0x2d50c0u: goto label_2d50c0;
        case 0x2d50d4u: goto label_2d50d4;
        case 0x2d50f0u: goto label_2d50f0;
        case 0x2d5104u: goto label_2d5104;
        case 0x2d5110u: goto label_2d5110;
        case 0x2d5118u: goto label_2d5118;
        case 0x2d5120u: goto label_2d5120;
        case 0x2d5128u: goto label_2d5128;
        default: break;
    }

    ctx->pc = 0x2d4fc8u;

    // 0x2d4fc8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2d4fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2d4fcc: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2d4fccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2d4fd0: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2d4fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2d4fd4: 0x24c60f20  addiu       $a2, $a2, 0xF20
    ctx->pc = 0x2d4fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3872));
    // 0x2d4fd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d4fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4fdc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2d4fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4fe0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2d4fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2d4fe4: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2d4fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2d4fe8: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2d4fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2d4fec: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2d4fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2d4ff0: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x2d4ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x2d4ff4: 0xc0c680c  jal         func_31A030
    ctx->pc = 0x2D4FF4u;
    SET_GPR_U32(ctx, 31, 0x2D4FFCu);
    ctx->pc = 0x2D4FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4FF4u;
    // 0x2d4ff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A030u, 0x2D4FF4u, 0x2D4FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FFCu;
label_2d4ffc:
    // 0x2d4ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d4ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5000: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d5000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5004: 0xc0b571a  jal         func_2D5C68
    ctx->pc = 0x2D5004u;
    SET_GPR_U32(ctx, 31, 0x2D500Cu);
    ctx->pc = 0x2D5008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5004u;
    // 0x2d5008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C68u, 0x2D5004u, 0x2D500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D500Cu;
label_2d500c:
    // 0x2d500c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2D500Cu;
    {
        const bool branch_taken_0x2d500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D500Cu;
        // 0x2d5010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d500c) {
            ctx->pc = 0x2D5130u;
            goto label_2d5130;
        }
    }
    ctx->pc = 0x2D5014u;
    // 0x2d5014: 0xc0b571e  jal         func_2D5C78
    ctx->pc = 0x2D5014u;
    SET_GPR_U32(ctx, 31, 0x2D501Cu);
    ctx->pc = 0x2D5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5014u;
    // 0x2d5018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5C78u, 0x2D5014u, 0x2D501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D501Cu;
label_2d501c:
    // 0x2d501c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2d501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d5020: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2D5020u;
    SET_GPR_U32(ctx, 31, 0x2D5028u);
    ctx->pc = 0x2D5024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5020u;
    // 0x2d5024: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2D5020u, 0x2D5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5028u;
label_2d5028:
    // 0x2d5028: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2d5028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d502c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5030: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D5030u;
    {
        const bool branch_taken_0x2d5030 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5030u;
        // 0x2d5034: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5030) {
            ctx->pc = 0x2D5060u;
            goto label_2d5060;
        }
    }
    ctx->pc = 0x2D5038u;
    // 0x2d5038: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d5038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d503c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2d503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2d5040:
    // 0x2d5040: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d5040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d5044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d5044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d5048: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d5048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d504c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2d504cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2d5050: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d5050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d5054: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2d5054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5058: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D5058u;
    {
        const bool branch_taken_0x2d5058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5058) {
            ctx->pc = 0x2D505Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5058u;
            // 0x2d505c: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5040;
        }
    }
    ctx->pc = 0x2D5060u;
label_2d5060:
    // 0x2d5060: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2d5060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d5064: 0x240401c4  addiu       $a0, $zero, 0x1C4
    ctx->pc = 0x2d5064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d5068: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2d5068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d506c: 0x2613ffff  addiu       $s3, $s0, -0x1
    ctx->pc = 0x2d506cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d5070: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2D5070u;
    SET_GPR_U32(ctx, 31, 0x2D5078u);
    ctx->pc = 0x2D5074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5070u;
    // 0x2d5074: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2D5070u, 0x2D5078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5078u;
label_2d5078:
    // 0x2d5078: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x2d5078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d507c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2d507cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2d5080: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D5080u;
    {
        const bool branch_taken_0x2d5080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5080u;
        // 0x2d5084: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5080) {
            ctx->pc = 0x2D50A8u;
            goto label_2d50a8;
        }
    }
    ctx->pc = 0x2D5088u;
    // 0x2d5088: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2d5088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d508c: 0x0  nop
    ctx->pc = 0x2d508cu;
    // NOP
label_2d5090:
    // 0x2d5090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5094: 0xc0b4f92  jal         func_2D3E48
    ctx->pc = 0x2D5094u;
    SET_GPR_U32(ctx, 31, 0x2D509Cu);
    ctx->pc = 0x2D5098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5094u;
    // 0x2d5098: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3E48u, 0x2D5094u, 0x2D509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D509Cu;
label_2d509c:
    // 0x2d509c: 0x0  nop
    ctx->pc = 0x2d509cu;
    // NOP
    // 0x2d50a0: 0x1670fffb  bne         $s3, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D50A0u;
    {
        const bool branch_taken_0x2d50a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50A0u;
        // 0x2d50a4: 0x263101c4  addiu       $s1, $s1, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d50a0) {
            ctx->pc = 0x2D5090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5090;
        }
    }
    ctx->pc = 0x2D50A8u;
label_2d50a8:
    // 0x2d50a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d50ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d50acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50b0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D50B0u;
    {
        const bool branch_taken_0x2d50b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50B0u;
        // 0x2d50b4: 0xae54002c  sw          $s4, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d50b0) {
            ctx->pc = 0x2D50E4u;
            goto label_2d50e4;
        }
    }
    ctx->pc = 0x2D50B8u;
    // 0x2d50b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d50b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50bc: 0x0  nop
    ctx->pc = 0x2d50bcu;
    // NOP
label_2d50c0:
    // 0x2d50c0: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x2d50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2d50c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d50c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d50c8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d50c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d50cc: 0xc0b50fa  jal         func_2D43E8
    ctx->pc = 0x2D50CCu;
    SET_GPR_U32(ctx, 31, 0x2D50D4u);
    ctx->pc = 0x2D50D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D50CCu;
    // 0x2d50d0: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D43E8u, 0x2D50CCu, 0x2D50D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50D4u;
label_2d50d4:
    // 0x2d50d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d50d8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d50d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d50dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D50DCu;
    {
        const bool branch_taken_0x2d50dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50DCu;
        // 0x2d50e0: 0x263101c4  addiu       $s1, $s1, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d50dc) {
            ctx->pc = 0x2D50C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d50c0;
        }
    }
    ctx->pc = 0x2D50E4u;
label_2d50e4:
    // 0x2d50e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d50e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50e8: 0xc0b5950  jal         func_2D6540
    ctx->pc = 0x2D50E8u;
    SET_GPR_U32(ctx, 31, 0x2D50F0u);
    ctx->pc = 0x2D50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D50E8u;
    // 0x2d50ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6540u, 0x2D50E8u, 0x2D50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50F0u;
label_2d50f0:
    // 0x2d50f0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2d50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d50f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d50f8: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2d50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x2d50fc: 0xc0b4dca  jal         func_2D3728
    ctx->pc = 0x2D50FCu;
    SET_GPR_U32(ctx, 31, 0x2D5104u);
    ctx->pc = 0x2D5100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D50FCu;
    // 0x2d5100: 0x8c64bd2c  lw          $a0, -0x42D4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3728u, 0x2D50FCu, 0x2D5104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5104u;
label_2d5104:
    // 0x2d5104: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2d5104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2d5108: 0xc0b5794  jal         func_2D5E50
    ctx->pc = 0x2D5108u;
    SET_GPR_U32(ctx, 31, 0x2D5110u);
    ctx->pc = 0x2D510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5108u;
    // 0x2d510c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5E50u, 0x2D5108u, 0x2D5110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5110u;
label_2d5110:
    // 0x2d5110: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5110u;
    {
        const bool branch_taken_0x2d5110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5110) {
            ctx->pc = 0x2D5120u;
            goto label_2d5120;
        }
    }
    ctx->pc = 0x2D5118u;
label_2d5118:
    // 0x2d5118: 0xc0b54e8  jal         func_2D53A0
    ctx->pc = 0x2D5118u;
    SET_GPR_U32(ctx, 31, 0x2D5120u);
    ctx->pc = 0x2D511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5118u;
    // 0x2d511c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D53A0u, 0x2D5118u, 0x2D5120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5120u;
label_2d5120:
    // 0x2d5120: 0xc0b5888  jal         func_2D6220
    ctx->pc = 0x2D5120u;
    SET_GPR_U32(ctx, 31, 0x2D5128u);
    ctx->pc = 0x2D5124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5120u;
    // 0x2d5124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6220u, 0x2D5120u, 0x2D5128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5128u;
label_2d5128:
    // 0x2d5128: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D5128u;
    {
        const bool branch_taken_0x2d5128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5128u;
        // 0x2d512c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5128) {
            ctx->pc = 0x2D5118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5118;
        }
    }
    ctx->pc = 0x2D5130u;
label_2d5130:
    // 0x2d5130: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2d5130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d5134: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2d5134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2d5138: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2d5138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d513c: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2d513cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2d5140: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2d5140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d5144: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x2d5144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2d5148: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5148u;
        // 0x2d514c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5150u;
}
