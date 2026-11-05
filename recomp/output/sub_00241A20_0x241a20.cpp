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

// Function: sub_00241A20
// Address: 0x241a20 - 0x241b40
void sub_00241A20_0x241a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241A20_0x241a20");
#endif

    switch (ctx->pc) {
        case 0x241a50u: goto label_241a50;
        case 0x241a90u: goto label_241a90;
        case 0x241ac4u: goto label_241ac4;
        case 0x241ad4u: goto label_241ad4;
        case 0x241ae0u: goto label_241ae0;
        case 0x241af8u: goto label_241af8;
        case 0x241b2cu: goto label_241b2c;
        default: break;
    }

    ctx->pc = 0x241a20u;

    // 0x241a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241a28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x241a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x241a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x241a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a30: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x241a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x241a34: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x241a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x241a38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241A38u;
    {
        const bool branch_taken_0x241a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A38u;
        // 0x241a3c: 0x8e07036c  lw          $a3, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a38) {
            ctx->pc = 0x241A48u;
            goto label_241a48;
        }
    }
    ctx->pc = 0x241A40u;
    // 0x241a40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x241A40u;
    {
        const bool branch_taken_0x241a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A40u;
        // 0x241a44: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a40) {
            ctx->pc = 0x241A74u;
            goto label_241a74;
        }
    }
    ctx->pc = 0x241A48u;
label_241a48:
    // 0x241a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a4c: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_241a50:
    // 0x241a50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241a54: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x241A54u;
    {
        const bool branch_taken_0x241a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x241a54) {
            ctx->pc = 0x241A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241A54u;
            // 0x241a58: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241A74u;
            goto label_241a74;
        }
    }
    ctx->pc = 0x241A5Cu;
    // 0x241a5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x241a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241a60: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x241a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x241a64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x241A64u;
    {
        const bool branch_taken_0x241a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A64u;
        // 0x241a68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a64) {
            ctx->pc = 0x241A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241a50;
        }
    }
    ctx->pc = 0x241A6Cu;
    // 0x241a6c: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x241a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
    // 0x241a70: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x241a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_241a74:
    // 0x241a74: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x241a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x241a78: 0x5443002a  bnel        $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x241A78u;
    {
        const bool branch_taken_0x241a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x241a78) {
            ctx->pc = 0x241A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241A78u;
            // 0x241a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241B24u;
            goto label_241b24;
        }
    }
    ctx->pc = 0x241A80u;
    // 0x241a80: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x241a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x241a84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x241a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a88: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x241A88u;
    SET_GPR_U32(ctx, 31, 0x241A90u);
    ctx->pc = 0x241A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A88u;
    // 0x241a8c: 0x24a56680  addiu       $a1, $a1, 0x6680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x241A88u, 0x241A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A90u;
label_241a90:
    // 0x241a90: 0x8e02038c  lw          $v0, 0x38C($s0)
    ctx->pc = 0x241a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x241a94: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x241a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x241a98: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x241a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x241a9c: 0x2462ffdd  addiu       $v0, $v1, -0x23
    ctx->pc = 0x241a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
    // 0x241aa0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x241aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x241aa4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x241AA4u;
    {
        const bool branch_taken_0x241aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AA4u;
        // 0x241aa8: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241aa4) {
            ctx->pc = 0x241AF8u;
            goto label_241af8;
        }
    }
    ctx->pc = 0x241AACu;
    // 0x241aac: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x241AACu;
    {
        const bool branch_taken_0x241aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AACu;
        // 0x241ab0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241aac) {
            ctx->pc = 0x241AE8u;
            goto label_241ae8;
        }
    }
    ctx->pc = 0x241AB4u;
    // 0x241ab4: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x241AB4u;
    {
        const bool branch_taken_0x241ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x241ab4) {
            ctx->pc = 0x241AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241AB4u;
            // 0x241ab8: 0x8e05038c  lw          $a1, 0x38C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241AECu;
            goto label_241aec;
        }
    }
    ctx->pc = 0x241ABCu;
    // 0x241abc: 0xc069ab8  jal         func_1A6AE0
    ctx->pc = 0x241ABCu;
    SET_GPR_U32(ctx, 31, 0x241AC4u);
    ctx->pc = 0x1A6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AE0u, 0x241ABCu, 0x241AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AC4u;
label_241ac4:
    // 0x241ac4: 0x8e02038c  lw          $v0, 0x38C($s0)
    ctx->pc = 0x241ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x241ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x241ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241acc: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x241ACCu;
    SET_GPR_U32(ctx, 31, 0x241AD4u);
    ctx->pc = 0x241AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241ACCu;
    // 0x241ad0: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x241ACCu, 0x241AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AD4u;
label_241ad4:
    // 0x241ad4: 0x8e02038c  lw          $v0, 0x38C($s0)
    ctx->pc = 0x241ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x241ad8: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x241AD8u;
    SET_GPR_U32(ctx, 31, 0x241AE0u);
    ctx->pc = 0x241ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241AD8u;
    // 0x241adc: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x241AD8u, 0x241AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AE0u;
label_241ae0:
    // 0x241ae0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x241AE0u;
    {
        const bool branch_taken_0x241ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AE0u;
        // 0x241ae4: 0x8e04038c  lw          $a0, 0x38C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ae0) {
            ctx->pc = 0x241AFCu;
            goto label_241afc;
        }
    }
    ctx->pc = 0x241AE8u;
label_241ae8:
    // 0x241ae8: 0x8e05038c  lw          $a1, 0x38C($s0)
    ctx->pc = 0x241ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_241aec:
    // 0x241aec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x241af0: 0xc08f982  jal         func_23E608
    ctx->pc = 0x241AF0u;
    SET_GPR_U32(ctx, 31, 0x241AF8u);
    ctx->pc = 0x241AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241AF0u;
    // 0x241af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E608u, 0x241AF0u, 0x241AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AF8u;
label_241af8:
    // 0x241af8: 0x8e04038c  lw          $a0, 0x38C($s0)
    ctx->pc = 0x241af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_241afc:
    // 0x241afc: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x241afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x241b00: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x241b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x241b04: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x241B04u;
    {
        const bool branch_taken_0x241b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241b04) {
            ctx->pc = 0x241B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241B04u;
            // 0x241b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241B24u;
            goto label_241b24;
        }
    }
    ctx->pc = 0x241B0Cu;
    // 0x241b0c: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x241b0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x241b10: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x241b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x241b14: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x241b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x241b18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x241b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x241b1c: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x241b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
    // 0x241b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241b24:
    // 0x241b24: 0xc08a15a  jal         func_228568
    ctx->pc = 0x241B24u;
    SET_GPR_U32(ctx, 31, 0x241B2Cu);
    ctx->pc = 0x241B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241B24u;
    // 0x241b28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x241B24u, 0x241B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241B2Cu;
label_241b2c:
    // 0x241b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241b30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x241b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241b34: 0x3e00008  jr          $ra
    ctx->pc = 0x241B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B34u;
        // 0x241b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241B3Cu;
    // 0x241b3c: 0x0  nop
    ctx->pc = 0x241b3cu;
    // NOP
    ctx->pc = 0x241b40u;
}
