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

// Function: sub_001A6248
// Address: 0x1a6248 - 0x1a6400
void sub_001A6248_0x1a6248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6248_0x1a6248");
#endif

    switch (ctx->pc) {
        case 0x1a626cu: goto label_1a626c;
        case 0x1a629cu: goto label_1a629c;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62c4u: goto label_1a62c4;
        case 0x1a62d8u: goto label_1a62d8;
        case 0x1a6328u: goto label_1a6328;
        case 0x1a634cu: goto label_1a634c;
        case 0x1a6364u: goto label_1a6364;
        case 0x1a6390u: goto label_1a6390;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a63ccu: goto label_1a63cc;
        case 0x1a63e8u: goto label_1a63e8;
        default: break;
    }

    ctx->pc = 0x1a6248u;

    // 0x1a6248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a624c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a624cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6254: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a6254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a6258: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a6258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a625c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a625cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a6264: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6264u;
    SET_GPR_U32(ctx, 31, 0x1A626Cu);
    ctx->pc = 0x1A6268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6264u;
    // 0x1a6268: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6264u, 0x1A626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A626Cu;
label_1a626c:
    // 0x1a626c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a6270: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a6270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a6274: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6274u;
    {
        const bool branch_taken_0x1a6274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6274u;
        // 0x1a6278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6274) {
            ctx->pc = 0x1A62A4u;
            goto label_1a62a4;
        }
    }
    ctx->pc = 0x1A627Cu;
    // 0x1a627c: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1a627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1a6280: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1a6280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1a6284: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a6284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a6288: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6288u;
    {
        const bool branch_taken_0x1a6288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6288) {
            ctx->pc = 0x1A628Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6288u;
            // 0x1a628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A62A4u;
            goto label_1a62a4;
        }
    }
    ctx->pc = 0x1A6290u;
    // 0x1a6290: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6294: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1A6294u;
    SET_GPR_U32(ctx, 31, 0x1A629Cu);
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1A6294u, 0x1A629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A629Cu;
label_1a629c:
    // 0x1a629c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A629Cu;
    {
        const bool branch_taken_0x1a629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A629Cu;
        // 0x1a62a0: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a629c) {
            ctx->pc = 0x1A62DCu;
            goto label_1a62dc;
        }
    }
    ctx->pc = 0x1A62A4u;
label_1a62a4:
    // 0x1a62a4: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A62A4u;
    SET_GPR_U32(ctx, 31, 0x1A62ACu);
    ctx->pc = 0x1A62A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62A4u;
    // 0x1a62a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A62A4u, 0x1A62ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62ACu;
label_1a62ac:
    // 0x1a62ac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a62acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a62b0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a62b4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A62B4u;
    {
        const bool branch_taken_0x1a62b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a62b4) {
            ctx->pc = 0x1A62B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A62B4u;
            // 0x1a62b8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A62DCu;
            goto label_1a62dc;
        }
    }
    ctx->pc = 0x1A62BCu;
    // 0x1a62bc: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x1A62BCu;
    SET_GPR_U32(ctx, 31, 0x1A62C4u);
    ctx->pc = 0x1A62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62BCu;
    // 0x1a62c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x1A62BCu, 0x1A62C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62C4u;
label_1a62c4:
    // 0x1a62c4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1a62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1a62c8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A62C8u;
    {
        const bool branch_taken_0x1a62c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62c8) {
            ctx->pc = 0x1A62CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A62C8u;
            // 0x1a62cc: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A62DCu;
            goto label_1a62dc;
        }
    }
    ctx->pc = 0x1A62D0u;
    // 0x1a62d0: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1A62D0u;
    SET_GPR_U32(ctx, 31, 0x1A62D8u);
    ctx->pc = 0x1A62D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62D0u;
    // 0x1a62d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1A62D0u, 0x1A62D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62D8u;
label_1a62d8:
    // 0x1a62d8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1a62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1a62dc:
    // 0x1a62dc: 0x2444fdc5  addiu       $a0, $v0, -0x23B
    ctx->pc = 0x1a62dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966725));
    // 0x1a62e0: 0x2c830055  sltiu       $v1, $a0, 0x55
    ctx->pc = 0x1a62e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1a62e4: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A62E4u;
    {
        const bool branch_taken_0x1a62e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62E4u;
        // 0x1a62e8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62e4) {
            ctx->pc = 0x1A63D4u;
            goto label_1a63d4;
        }
    }
    ctx->pc = 0x1A62ECu;
    // 0x1a62ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a62f0: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x1a62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1a62f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a62f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a62f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a62fc: 0x800008  jr          $a0
    ctx->pc = 0x1A62FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6304u: goto label_1a6304;
            case 0x1A634Cu: goto label_1a634c;
            case 0x1A636Cu: goto label_1a636c;
            case 0x1A63B4u: goto label_1a63b4;
            case 0x1A63D4u: goto label_1a63d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A62FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A6304u;
label_1a6304:
    // 0x1a6304: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1a6304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1a6308: 0x8e060148  lw          $a2, 0x148($s0)
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a630c: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x1a630cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1a6310: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A6310u;
    {
        const bool branch_taken_0x1a6310 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6310u;
        // 0x1a6314: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6310) {
            ctx->pc = 0x1A6350u;
            goto label_1a6350;
        }
    }
    ctx->pc = 0x1A6318u;
    // 0x1a6318: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6318u;
    {
        const bool branch_taken_0x1a6318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6318u;
        // 0x1a631c: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6318) {
            ctx->pc = 0x1A6344u;
            goto label_1a6344;
        }
    }
    ctx->pc = 0x1A6320u;
    // 0x1a6320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6324: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1a6324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_1a6328:
    // 0x1a6328: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a6328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a632c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A632Cu;
    {
        const bool branch_taken_0x1a632c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A632Cu;
        // 0x1a6330: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a632c) {
            ctx->pc = 0x1A6344u;
            goto label_1a6344;
        }
    }
    ctx->pc = 0x1A6334u;
    // 0x1a6334: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x1a6334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a6338: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A6338u;
    {
        const bool branch_taken_0x1a6338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6338u;
        // 0x1a633c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6338) {
            ctx->pc = 0x1A6328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6328;
        }
    }
    ctx->pc = 0x1A6340u;
    // 0x1a6340: 0x8e0401e8  lw          $a0, 0x1E8($s0)
    ctx->pc = 0x1a6340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_1a6344:
    // 0x1a6344: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x1A6344u;
    SET_GPR_U32(ctx, 31, 0x1A634Cu);
    ctx->pc = 0x1A6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6344u;
    // 0x1a6348: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x1A6344u, 0x1A634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A634Cu;
label_1a634c:
    // 0x1a634c: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1a634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1a6350:
    // 0x1a6350: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1a6350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1a6354: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a6354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a6358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a6358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a635c: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1A635Cu;
    SET_GPR_U32(ctx, 31, 0x1A6364u);
    ctx->pc = 0x1A6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A635Cu;
    // 0x1a6360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1A635Cu, 0x1A6364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6364u;
label_1a6364:
    // 0x1a6364: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A6364u;
    {
        const bool branch_taken_0x1a6364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6364u;
        // 0x1a6368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6364) {
            ctx->pc = 0x1A63ECu;
            goto label_1a63ec;
        }
    }
    ctx->pc = 0x1A636Cu;
label_1a636c:
    // 0x1a636c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1a636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1a6370: 0x8e060148  lw          $a2, 0x148($s0)
    ctx->pc = 0x1a6370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a6374: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1a6378: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A6378u;
    {
        const bool branch_taken_0x1a6378 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6378u;
        // 0x1a637c: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6378) {
            ctx->pc = 0x1A63B8u;
            goto label_1a63b8;
        }
    }
    ctx->pc = 0x1A6380u;
    // 0x1a6380: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6380u;
    {
        const bool branch_taken_0x1a6380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6380u;
        // 0x1a6384: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6380) {
            ctx->pc = 0x1A63ACu;
            goto label_1a63ac;
        }
    }
    ctx->pc = 0x1A6388u;
    // 0x1a6388: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a638c: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_1a6390:
    // 0x1a6390: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a6390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6394: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6394u;
    {
        const bool branch_taken_0x1a6394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6394u;
        // 0x1a6398: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6394) {
            ctx->pc = 0x1A63ACu;
            goto label_1a63ac;
        }
    }
    ctx->pc = 0x1A639Cu;
    // 0x1a639c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x1a639cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a63a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A63A0u;
    {
        const bool branch_taken_0x1a63a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63A0u;
        // 0x1a63a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63a0) {
            ctx->pc = 0x1A6390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6390;
        }
    }
    ctx->pc = 0x1A63A8u;
    // 0x1a63a8: 0x8e0401e8  lw          $a0, 0x1E8($s0)
    ctx->pc = 0x1a63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_1a63ac:
    // 0x1a63ac: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x1A63ACu;
    SET_GPR_U32(ctx, 31, 0x1A63B4u);
    ctx->pc = 0x1A63B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63ACu;
    // 0x1a63b0: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x1A63ACu, 0x1A63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63B4u;
label_1a63b4:
    // 0x1a63b4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1a63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1a63b8:
    // 0x1a63b8: 0x3c013f94  lui         $at, 0x3F94
    ctx->pc = 0x1a63b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16276 << 16));
    // 0x1a63bc: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1a63bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1a63c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a63c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a63c4: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1A63C4u;
    SET_GPR_U32(ctx, 31, 0x1A63CCu);
    ctx->pc = 0x1A63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63C4u;
    // 0x1a63c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1A63C4u, 0x1A63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63CCu;
label_1a63cc:
    // 0x1a63cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A63CCu;
    {
        const bool branch_taken_0x1a63cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63CCu;
        // 0x1a63d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63cc) {
            ctx->pc = 0x1A63ECu;
            goto label_1a63ec;
        }
    }
    ctx->pc = 0x1A63D4u;
label_1a63d4:
    // 0x1a63d4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1a63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1a63d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a63d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a63dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a63dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a63e0: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1A63E0u;
    SET_GPR_U32(ctx, 31, 0x1A63E8u);
    ctx->pc = 0x1A63E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63E0u;
    // 0x1a63e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1A63E0u, 0x1A63E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63E8u;
label_1a63e8:
    // 0x1a63e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a63e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a63ec:
    // 0x1a63ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a63ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a63f0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a63f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a63f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A63F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63F4u;
        // 0x1a63f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A63F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A63FCu;
    // 0x1a63fc: 0x0  nop
    ctx->pc = 0x1a63fcu;
    // NOP
    ctx->pc = 0x1a6400u;
}
