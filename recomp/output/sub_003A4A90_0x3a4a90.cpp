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

// Function: sub_003A4A90
// Address: 0x3a4a90 - 0x3a4bb0
void sub_003A4A90_0x3a4a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4A90_0x3a4a90");
#endif

    switch (ctx->pc) {
        case 0x3a4b40u: goto label_3a4b40;
        case 0x3a4b50u: goto label_3a4b50;
        case 0x3a4b60u: goto label_3a4b60;
        case 0x3a4b70u: goto label_3a4b70;
        case 0x3a4b80u: goto label_3a4b80;
        case 0x3a4b90u: goto label_3a4b90;
        default: break;
    }

    ctx->pc = 0x3a4a90u;

    // 0x3a4a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4a94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a4a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4a9c: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3A4A9Cu;
    {
        const bool branch_taken_0x3a4a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A9Cu;
        // 0x3a4aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a9c) {
            ctx->pc = 0x3A4BA0u;
            goto label_3a4ba0;
        }
    }
    ctx->pc = 0x3A4AA4u;
    // 0x3a4aa4: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x3a4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x3a4aa8: 0x10a2002b  beq         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A4AA8u;
    {
        const bool branch_taken_0x3a4aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AA8u;
        // 0x3a4aac: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4aa8) {
            ctx->pc = 0x3A4B58u;
            goto label_3a4b58;
        }
    }
    ctx->pc = 0x3A4AB0u;
    // 0x3a4ab0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A4AB0u;
    {
        const bool branch_taken_0x3a4ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AB0u;
        // 0x3a4ab4: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ab0) {
            ctx->pc = 0x3A4AF8u;
            goto label_3a4af8;
        }
    }
    ctx->pc = 0x3A4AB8u;
    // 0x3a4ab8: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x3a4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x3a4abc: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A4ABCu;
    {
        const bool branch_taken_0x3a4abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4ABCu;
        // 0x3a4ac0: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4abc) {
            ctx->pc = 0x3A4B48u;
            goto label_3a4b48;
        }
    }
    ctx->pc = 0x3A4AC4u;
    // 0x3a4ac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4AC4u;
    {
        const bool branch_taken_0x3a4ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AC4u;
        // 0x3a4ac8: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ac4) {
            ctx->pc = 0x3A4AE0u;
            goto label_3a4ae0;
        }
    }
    ctx->pc = 0x3A4ACCu;
    // 0x3a4acc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x3a4accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x3a4ad0: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A4AD0u;
    {
        const bool branch_taken_0x3a4ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AD0u;
        // 0x3a4ad4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ad0) {
            ctx->pc = 0x3A4B38u;
            goto label_3a4b38;
        }
    }
    ctx->pc = 0x3A4AD8u;
    // 0x3a4ad8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3A4AD8u;
    {
        const bool branch_taken_0x3a4ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AD8u;
        // 0x3a4adc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ad8) {
            ctx->pc = 0x3A4BA4u;
            goto label_3a4ba4;
        }
    }
    ctx->pc = 0x3A4AE0u;
label_3a4ae0:
    // 0x3a4ae0: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A4AE0u;
    {
        const bool branch_taken_0x3a4ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AE0u;
        // 0x3a4ae4: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ae0) {
            ctx->pc = 0x3A4B58u;
            goto label_3a4b58;
        }
    }
    ctx->pc = 0x3A4AE8u;
    // 0x3a4ae8: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A4AE8u;
    {
        const bool branch_taken_0x3a4ae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AE8u;
        // 0x3a4aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ae8) {
            ctx->pc = 0x3A4B68u;
            goto label_3a4b68;
        }
    }
    ctx->pc = 0x3A4AF0u;
    // 0x3a4af0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3A4AF0u;
    {
        const bool branch_taken_0x3a4af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AF0u;
        // 0x3a4af4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4af0) {
            ctx->pc = 0x3A4BA4u;
            goto label_3a4ba4;
        }
    }
    ctx->pc = 0x3A4AF8u;
label_3a4af8:
    // 0x3a4af8: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A4AF8u;
    {
        const bool branch_taken_0x3a4af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AF8u;
        // 0x3a4afc: 0x28a2012c  slti        $v0, $a1, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4af8) {
            ctx->pc = 0x3A4B98u;
            goto label_3a4b98;
        }
    }
    ctx->pc = 0x3A4B00u;
    // 0x3a4b00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4B00u;
    {
        const bool branch_taken_0x3a4b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B00u;
        // 0x3a4b04: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b00) {
            ctx->pc = 0x3A4B20u;
            goto label_3a4b20;
        }
    }
    ctx->pc = 0x3A4B08u;
    // 0x3a4b08: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x3a4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x3a4b0c: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A4B0Cu;
    {
        const bool branch_taken_0x3a4b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B0Cu;
        // 0x3a4b10: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b0c) {
            ctx->pc = 0x3A4B68u;
            goto label_3a4b68;
        }
    }
    ctx->pc = 0x3A4B14u;
    // 0x3a4b14: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A4B14u;
    {
        const bool branch_taken_0x3a4b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B14u;
        // 0x3a4b18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b14) {
            ctx->pc = 0x3A4BA4u;
            goto label_3a4ba4;
        }
    }
    ctx->pc = 0x3A4B1Cu;
    // 0x3a4b1c: 0x0  nop
    ctx->pc = 0x3a4b1cu;
    // NOP
label_3a4b20:
    // 0x3a4b20: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A4B20u;
    {
        const bool branch_taken_0x3a4b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B20u;
        // 0x3a4b24: 0x2402012e  addiu       $v0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b20) {
            ctx->pc = 0x3A4B78u;
            goto label_3a4b78;
        }
    }
    ctx->pc = 0x3A4B28u;
    // 0x3a4b28: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A4B28u;
    {
        const bool branch_taken_0x3a4b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B28u;
        // 0x3a4b2c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b28) {
            ctx->pc = 0x3A4B88u;
            goto label_3a4b88;
        }
    }
    ctx->pc = 0x3A4B30u;
    // 0x3a4b30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A4B30u;
    {
        const bool branch_taken_0x3a4b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B30u;
        // 0x3a4b34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b30) {
            ctx->pc = 0x3A4BA4u;
            goto label_3a4ba4;
        }
    }
    ctx->pc = 0x3A4B38u;
label_3a4b38:
    // 0x3a4b38: 0xc0e928c  jal         func_3A4A30
    ctx->pc = 0x3A4B38u;
    SET_GPR_U32(ctx, 31, 0x3A4B40u);
    ctx->pc = 0x3A4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A30u, 0x3A4B38u, 0x3A4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B40u;
label_3a4b40:
    // 0x3a4b40: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3A4B40u;
    {
        const bool branch_taken_0x3a4b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B40u;
        // 0x3a4b44: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b40) {
            ctx->pc = 0x3A4B9Cu;
            goto label_3a4b9c;
        }
    }
    ctx->pc = 0x3A4B48u;
label_3a4b48:
    // 0x3a4b48: 0xc0e9290  jal         func_3A4A40
    ctx->pc = 0x3A4B48u;
    SET_GPR_U32(ctx, 31, 0x3A4B50u);
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3A4B48u, 0x3A4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B50u;
label_3a4b50:
    // 0x3a4b50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A4B50u;
    {
        const bool branch_taken_0x3a4b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B50u;
        // 0x3a4b54: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b50) {
            ctx->pc = 0x3A4B9Cu;
            goto label_3a4b9c;
        }
    }
    ctx->pc = 0x3A4B58u;
label_3a4b58:
    // 0x3a4b58: 0xc0e9298  jal         func_3A4A60
    ctx->pc = 0x3A4B58u;
    SET_GPR_U32(ctx, 31, 0x3A4B60u);
    ctx->pc = 0x3A4A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A60u, 0x3A4B58u, 0x3A4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B60u;
label_3a4b60:
    // 0x3a4b60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A4B60u;
    {
        const bool branch_taken_0x3a4b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B60u;
        // 0x3a4b64: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b60) {
            ctx->pc = 0x3A4B9Cu;
            goto label_3a4b9c;
        }
    }
    ctx->pc = 0x3A4B68u;
label_3a4b68:
    // 0x3a4b68: 0xc0e929a  jal         func_3A4A68
    ctx->pc = 0x3A4B68u;
    SET_GPR_U32(ctx, 31, 0x3A4B70u);
    ctx->pc = 0x3A4A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A68u, 0x3A4B68u, 0x3A4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B70u;
label_3a4b70:
    // 0x3a4b70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A4B70u;
    {
        const bool branch_taken_0x3a4b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B70u;
        // 0x3a4b74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b70) {
            ctx->pc = 0x3A4B9Cu;
            goto label_3a4b9c;
        }
    }
    ctx->pc = 0x3A4B78u;
label_3a4b78:
    // 0x3a4b78: 0xc0e92a0  jal         func_3A4A80
    ctx->pc = 0x3A4B78u;
    SET_GPR_U32(ctx, 31, 0x3A4B80u);
    ctx->pc = 0x3A4A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A80u, 0x3A4B78u, 0x3A4B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B80u;
label_3a4b80:
    // 0x3a4b80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4B80u;
    {
        const bool branch_taken_0x3a4b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B80u;
        // 0x3a4b84: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b80) {
            ctx->pc = 0x3A4B9Cu;
            goto label_3a4b9c;
        }
    }
    ctx->pc = 0x3A4B88u;
label_3a4b88:
    // 0x3a4b88: 0xc0e92a2  jal         func_3A4A88
    ctx->pc = 0x3A4B88u;
    SET_GPR_U32(ctx, 31, 0x3A4B90u);
    ctx->pc = 0x3A4A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A88u, 0x3A4B88u, 0x3A4B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B90u;
label_3a4b90:
    // 0x3a4b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4B90u;
    {
        const bool branch_taken_0x3a4b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B90u;
        // 0x3a4b94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b90) {
            ctx->pc = 0x3A4B9Cu;
            goto label_3a4b9c;
        }
    }
    ctx->pc = 0x3A4B98u;
label_3a4b98:
    // 0x3a4b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a4b9c:
    // 0x3a4b9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3a4b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a4ba0:
    // 0x3a4ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4ba4:
    // 0x3a4ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BA4u;
        // 0x3a4ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4BACu;
    // 0x3a4bac: 0x0  nop
    ctx->pc = 0x3a4bacu;
    // NOP
    ctx->pc = 0x3a4bb0u;
}
