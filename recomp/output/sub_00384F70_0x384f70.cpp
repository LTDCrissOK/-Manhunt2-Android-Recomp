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

// Function: sub_00384F70
// Address: 0x384f70 - 0x3850b8
void sub_00384F70_0x384f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384F70_0x384f70");
#endif

    switch (ctx->pc) {
        case 0x384fa8u: goto label_384fa8;
        case 0x384fb0u: goto label_384fb0;
        case 0x384fd8u: goto label_384fd8;
        case 0x385040u: goto label_385040;
        case 0x385068u: goto label_385068;
        default: break;
    }

    ctx->pc = 0x384f70u;

    // 0x384f70: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384f74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x384f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x384f78: 0x8c67dfe4  lw          $a3, -0x201C($v1)
    ctx->pc = 0x384f78u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x384f7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384f80: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x384f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x384f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x384f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x384f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x384f8c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x384f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x384f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x384f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x384f94: 0x10e60018  beq         $a3, $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x384F94u;
    {
        const bool branch_taken_0x384f94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x384F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F94u;
        // 0x384f98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f94) {
            ctx->pc = 0x384FF8u;
            goto label_384ff8;
        }
    }
    ctx->pc = 0x384F9Cu;
    // 0x384f9c: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x384F9Cu;
    {
        const bool branch_taken_0x384f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x384f9c) {
            ctx->pc = 0x384FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384F9Cu;
            // 0x384fa0: 0x3c040065  lui         $a0, 0x65 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384FD0u;
            goto label_384fd0;
        }
    }
    ctx->pc = 0x384FA4u;
    // 0x384fa4: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x384fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_384fa8:
    // 0x384fa8: 0xc0f34fc  jal         func_3CD3F0
    ctx->pc = 0x384FA8u;
    SET_GPR_U32(ctx, 31, 0x384FB0u);
    ctx->pc = 0x384FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384FA8u;
    // 0x384fac: 0x26246080  addiu       $a0, $s1, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD3F0u, 0x384FA8u, 0x384FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384FB0u;
label_384fb0:
    // 0x384fb0: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x384FB0u;
    {
        const bool branch_taken_0x384fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x384fb0) {
            ctx->pc = 0x384FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384fa8;
        }
    }
    ctx->pc = 0x384FB8u;
    // 0x384fb8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x384FB8u;
    {
        const bool branch_taken_0x384fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x384FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FB8u;
        // 0x384fbc: 0x3c030065  lui         $v1, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384fb8) {
            ctx->pc = 0x384FF8u;
            goto label_384ff8;
        }
    }
    ctx->pc = 0x384FC0u;
    // 0x384fc0: 0x8c646248  lw          $a0, 0x6248($v1)
    ctx->pc = 0x384fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25160)));
    // 0x384fc4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x384FC4u;
    {
        const bool branch_taken_0x384fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FC4u;
        // 0x384fc8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384fc4) {
            ctx->pc = 0x384FF8u;
            goto label_384ff8;
        }
    }
    ctx->pc = 0x384FCCu;
    // 0x384fcc: 0x0  nop
    ctx->pc = 0x384fccu;
    // NOP
label_384fd0:
    // 0x384fd0: 0xc0f34fc  jal         func_3CD3F0
    ctx->pc = 0x384FD0u;
    SET_GPR_U32(ctx, 31, 0x384FD8u);
    ctx->pc = 0x384FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384FD0u;
    // 0x384fd4: 0x24846080  addiu       $a0, $a0, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD3F0u, 0x384FD0u, 0x384FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384FD8u;
label_384fd8:
    // 0x384fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384fdc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x384FDCu;
    {
        const bool branch_taken_0x384fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x384FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FDCu;
        // 0x384fe0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384fdc) {
            ctx->pc = 0x384FF8u;
            goto label_384ff8;
        }
    }
    ctx->pc = 0x384FE4u;
    // 0x384fe4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x384FE4u;
    {
        const bool branch_taken_0x384fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x384FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FE4u;
        // 0x384fe8: 0x3c020065  lui         $v0, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384fe4) {
            ctx->pc = 0x384FF4u;
            goto label_384ff4;
        }
    }
    ctx->pc = 0x384FECu;
    // 0x384fec: 0x8c436248  lw          $v1, 0x6248($v0)
    ctx->pc = 0x384fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25160)));
    // 0x384ff0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x384ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_384ff4:
    // 0x384ff4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x384ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384ff8:
    // 0x384ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x384ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x384ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x385000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385004: 0x3e00008  jr          $ra
    ctx->pc = 0x385004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385004u;
        // 0x385008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38500Cu;
    // 0x38500c: 0x0  nop
    ctx->pc = 0x38500cu;
    // NOP
    // 0x385010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x385014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x385014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x385018: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x385018u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x38501c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x38501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x385020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x385020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x385024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x385028: 0x2610dfdc  addiu       $s0, $s0, -0x2024
    ctx->pc = 0x385028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959068));
    // 0x38502c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38502cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x385030: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x385030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x385034: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x385034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x385038: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x385038u;
    SET_GPR_U32(ctx, 31, 0x385040u);
    ctx->pc = 0x38503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385038u;
    // 0x38503c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x385038u, 0x385040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385040u;
label_385040:
    // 0x385040: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x385040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x385044: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x385044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x385048: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x385048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x38504c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38504cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385050: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x385050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x385054: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x385054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x385058: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x385058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38505c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38505cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385060: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x385060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x385064: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x385064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_385068:
    // 0x385068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x385068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38506c: 0x8ca4dfe4  lw          $a0, -0x201C($a1)
    ctx->pc = 0x38506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959076)));
    // 0x385070: 0x80f2674  j           func_3C99D0
    ctx->pc = 0x385070u;
    ctx->pc = 0x385074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385070u;
    // 0x385074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99D0u;
    sub_003C99D0_0x3c99d0(rdram, ctx, runtime); return;
    ctx->pc = 0x385078u;
    // 0x385078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x385078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38507c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x38507cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x385080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385084: 0x24a5dfdc  addiu       $a1, $a1, -0x2024
    ctx->pc = 0x385084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959068));
    // 0x385088: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x385088u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x38508c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x38508cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x385090: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x385090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x385094: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x385094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x385098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38509c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x38509cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3850a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3850a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x3850a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3850a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3850a8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3850a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3850ac: 0x8ce4dfe4  lw          $a0, -0x201C($a3)
    ctx->pc = 0x3850acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x3850b0: 0x80f2674  j           func_3C99D0
    ctx->pc = 0x3850B0u;
    ctx->pc = 0x3850B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3850B0u;
    // 0x3850b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99D0u;
    sub_003C99D0_0x3c99d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3850B8u;
}
