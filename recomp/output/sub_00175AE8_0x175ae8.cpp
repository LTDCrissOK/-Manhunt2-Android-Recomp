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

// Function: sub_00175AE8
// Address: 0x175ae8 - 0x175d98
void sub_00175AE8_0x175ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175AE8_0x175ae8");
#endif

    switch (ctx->pc) {
        case 0x175b24u: goto label_175b24;
        case 0x175b30u: goto label_175b30;
        case 0x175b90u: goto label_175b90;
        case 0x175ba4u: goto label_175ba4;
        case 0x175bbcu: goto label_175bbc;
        case 0x175bd4u: goto label_175bd4;
        case 0x175be4u: goto label_175be4;
        case 0x175bf8u: goto label_175bf8;
        case 0x175c00u: goto label_175c00;
        case 0x175c38u: goto label_175c38;
        case 0x175c50u: goto label_175c50;
        case 0x175c88u: goto label_175c88;
        case 0x175c98u: goto label_175c98;
        case 0x175cccu: goto label_175ccc;
        case 0x175cdcu: goto label_175cdc;
        case 0x175ce8u: goto label_175ce8;
        case 0x175d0cu: goto label_175d0c;
        case 0x175d18u: goto label_175d18;
        case 0x175d44u: goto label_175d44;
        case 0x175d64u: goto label_175d64;
        case 0x175d74u: goto label_175d74;
        default: break;
    }

    ctx->pc = 0x175ae8u;

    // 0x175ae8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x175ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x175aec: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x175aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x175af0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x175af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x175af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175af8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x175af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175afc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x175afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x175b00: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x175b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x175b04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x175b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b08: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x175b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x175b0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x175b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b10: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x175b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x175b14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x175b14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b18: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x175b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x175b1c: 0xc04621e  jal         func_118878
    ctx->pc = 0x175B1Cu;
    SET_GPR_U32(ctx, 31, 0x175B24u);
    ctx->pc = 0x175B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B1Cu;
    // 0x175b20: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118878u, 0x175B1Cu, 0x175B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B24u;
label_175b24:
    // 0x175b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b28: 0xc05a602  jal         func_169808
    ctx->pc = 0x175B28u;
    SET_GPR_U32(ctx, 31, 0x175B30u);
    ctx->pc = 0x175B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B28u;
    // 0x175b2c: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x175B28u, 0x175B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B30u;
label_175b30:
    // 0x175b30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x175b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b34: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x175b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x175b38: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x175b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x175b3c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x175B3Cu;
    {
        const bool branch_taken_0x175b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B3Cu;
        // 0x175b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b3c) {
            ctx->pc = 0x175B80u;
            goto label_175b80;
        }
    }
    ctx->pc = 0x175B44u;
    // 0x175b44: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x175b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x175b48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175b4c: 0x2442f3c0  addiu       $v0, $v0, -0xC40
    ctx->pc = 0x175b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964160));
    // 0x175b50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175b54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175b58: 0x800008  jr          $a0
    ctx->pc = 0x175B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175B60u: goto label_175b60;
            case 0x175B68u: goto label_175b68;
            case 0x175B70u: goto label_175b70;
            case 0x175B78u: goto label_175b78;
            case 0x175B7Cu: goto label_175b7c;
            case 0x175B80u: goto label_175b80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175B58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x175B60u;
label_175b60:
    // 0x175b60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x175B60u;
    {
        const bool branch_taken_0x175b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B60u;
        // 0x175b64: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b60) {
            ctx->pc = 0x175B80u;
            goto label_175b80;
        }
    }
    ctx->pc = 0x175B68u;
label_175b68:
    // 0x175b68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x175B68u;
    {
        const bool branch_taken_0x175b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B68u;
        // 0x175b6c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b68) {
            ctx->pc = 0x175B80u;
            goto label_175b80;
        }
    }
    ctx->pc = 0x175B70u;
label_175b70:
    // 0x175b70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175B70u;
    {
        const bool branch_taken_0x175b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B70u;
        // 0x175b74: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b70) {
            ctx->pc = 0x175B80u;
            goto label_175b80;
        }
    }
    ctx->pc = 0x175B78u;
label_175b78:
    // 0x175b78: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x175b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175b7c:
    // 0x175b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x175b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175b80:
    // 0x175b80: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x175B80u;
    {
        const bool branch_taken_0x175b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b80) {
            ctx->pc = 0x175BA4u;
            goto label_175ba4;
        }
    }
    ctx->pc = 0x175B88u;
    // 0x175b88: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x175B88u;
    SET_GPR_U32(ctx, 31, 0x175B90u);
    ctx->pc = 0x175B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B88u;
    // 0x175b8c: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x175B88u, 0x175B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B90u;
label_175b90:
    // 0x175b90: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x175b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x175b94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x175b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x175b98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b9c: 0xc04a896  jal         func_12A258
    ctx->pc = 0x175B9Cu;
    SET_GPR_U32(ctx, 31, 0x175BA4u);
    ctx->pc = 0x175BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B9Cu;
    // 0x175ba0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A258u, 0x175B9Cu, 0x175BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BA4u;
label_175ba4:
    // 0x175ba4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175BA4u;
    {
        const bool branch_taken_0x175ba4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x175ba4) {
            ctx->pc = 0x175BB4u;
            goto label_175bb4;
        }
    }
    ctx->pc = 0x175BACu;
    // 0x175bac: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x175BACu;
    {
        const bool branch_taken_0x175bac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x175bac) {
            ctx->pc = 0x175BD4u;
            goto label_175bd4;
        }
    }
    ctx->pc = 0x175BB4u;
label_175bb4:
    // 0x175bb4: 0xc05a61c  jal         func_169870
    ctx->pc = 0x175BB4u;
    SET_GPR_U32(ctx, 31, 0x175BBCu);
    ctx->pc = 0x175BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BB4u;
    // 0x175bb8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169870u, 0x175BB4u, 0x175BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BBCu;
label_175bbc:
    // 0x175bbc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x175BBCu;
    {
        const bool branch_taken_0x175bbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BBCu;
        // 0x175bc0: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bbc) {
            ctx->pc = 0x175BD4u;
            goto label_175bd4;
        }
    }
    ctx->pc = 0x175BC4u;
    // 0x175bc4: 0x27a40081  addiu       $a0, $sp, 0x81
    ctx->pc = 0x175bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 129));
    // 0x175bc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bcc: 0xc04a896  jal         func_12A258
    ctx->pc = 0x175BCCu;
    SET_GPR_U32(ctx, 31, 0x175BD4u);
    ctx->pc = 0x175BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BCCu;
    // 0x175bd0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A258u, 0x175BCCu, 0x175BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BD4u;
label_175bd4:
    // 0x175bd4: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x175BD4u;
    {
        const bool branch_taken_0x175bd4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x175bd4) {
            ctx->pc = 0x175BF8u;
            goto label_175bf8;
        }
    }
    ctx->pc = 0x175BDCu;
    // 0x175bdc: 0xc05a62e  jal         func_1698B8
    ctx->pc = 0x175BDCu;
    SET_GPR_U32(ctx, 31, 0x175BE4u);
    ctx->pc = 0x175BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BDCu;
    // 0x175be0: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698B8u, 0x175BDCu, 0x175BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BE4u;
label_175be4:
    // 0x175be4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x175be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x175be8: 0x27a40082  addiu       $a0, $sp, 0x82
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 130));
    // 0x175bec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bf0: 0xc04a896  jal         func_12A258
    ctx->pc = 0x175BF0u;
    SET_GPR_U32(ctx, 31, 0x175BF8u);
    ctx->pc = 0x175BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BF0u;
    // 0x175bf4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A258u, 0x175BF0u, 0x175BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BF8u;
label_175bf8:
    // 0x175bf8: 0xc05a624  jal         func_169890
    ctx->pc = 0x175BF8u;
    SET_GPR_U32(ctx, 31, 0x175C00u);
    ctx->pc = 0x175BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BF8u;
    // 0x175bfc: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169890u, 0x175BF8u, 0x175C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C00u;
label_175c00:
    // 0x175c00: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x175C00u;
    {
        const bool branch_taken_0x175c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c00) {
            ctx->pc = 0x175C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C00u;
            // 0x175c04: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C1Cu;
            goto label_175c1c;
        }
    }
    ctx->pc = 0x175C08u;
    // 0x175c08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x175c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175c0c: 0xfa0100c0  sqc2        $vf1, 0xC0($s0)
    ctx->pc = 0x175c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x175c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175c14: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x175c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x175c18: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x175c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_175c1c:
    // 0x175c1c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175C1Cu;
    {
        const bool branch_taken_0x175c1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x175c1c) {
            ctx->pc = 0x175C30u;
            goto label_175c30;
        }
    }
    ctx->pc = 0x175C24u;
    // 0x175c24: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x175c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x175c28: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x175C28u;
    {
        const bool branch_taken_0x175c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c28) {
            ctx->pc = 0x175C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C28u;
            // 0x175c2c: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175D78u;
            goto label_175d78;
        }
    }
    ctx->pc = 0x175C30u;
label_175c30:
    // 0x175c30: 0xc05a636  jal         func_1698D8
    ctx->pc = 0x175C30u;
    SET_GPR_U32(ctx, 31, 0x175C38u);
    ctx->pc = 0x175C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C30u;
    // 0x175c34: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698D8u, 0x175C30u, 0x175C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C38u;
label_175c38:
    // 0x175c38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x175c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c3c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x175c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x175c40: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x175C40u;
    {
        const bool branch_taken_0x175c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x175c40) {
            ctx->pc = 0x175C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C40u;
            // 0x175c44: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C48u;
            goto label_175c48;
        }
    }
    ctx->pc = 0x175C48u;
label_175c48:
    // 0x175c48: 0xc05a632  jal         func_1698C8
    ctx->pc = 0x175C48u;
    SET_GPR_U32(ctx, 31, 0x175C50u);
    ctx->pc = 0x175C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C48u;
    // 0x175c4c: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698C8u, 0x175C48u, 0x175C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C50u;
label_175c50:
    // 0x175c50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x175c50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175C54u;
    {
        const bool branch_taken_0x175c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C54u;
        // 0x175c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c54) {
            ctx->pc = 0x175C64u;
            goto label_175c64;
        }
    }
    ctx->pc = 0x175C5Cu;
    // 0x175c5c: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x175c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x175c60: 0xa2020068  sb          $v0, 0x68($s0)
    ctx->pc = 0x175c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
label_175c64:
    // 0x175c64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x175c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x175c68: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x175C68u;
    {
        const bool branch_taken_0x175c68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x175C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C68u;
        // 0x175c6c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c68) {
            ctx->pc = 0x175C80u;
            goto label_175c80;
        }
    }
    ctx->pc = 0x175C70u;
    // 0x175c70: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x175C70u;
    {
        const bool branch_taken_0x175c70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x175C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C70u;
        // 0x175c74: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c70) {
            ctx->pc = 0x175C90u;
            goto label_175c90;
        }
    }
    ctx->pc = 0x175C78u;
    // 0x175c78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x175C78u;
    {
        const bool branch_taken_0x175c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C78u;
        // 0x175c7c: 0x2c62000e  sltiu       $v0, $v1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c78) {
            ctx->pc = 0x175CA4u;
            goto label_175ca4;
        }
    }
    ctx->pc = 0x175C80u;
label_175c80:
    // 0x175c80: 0xc05a63a  jal         func_1698E8
    ctx->pc = 0x175C80u;
    SET_GPR_U32(ctx, 31, 0x175C88u);
    ctx->pc = 0x175C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C80u;
    // 0x175c84: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698E8u, 0x175C80u, 0x175C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C88u;
label_175c88:
    // 0x175c88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175C88u;
    {
        const bool branch_taken_0x175c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C88u;
        // 0x175c8c: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c88) {
            ctx->pc = 0x175C9Cu;
            goto label_175c9c;
        }
    }
    ctx->pc = 0x175C90u;
label_175c90:
    // 0x175c90: 0xc05a63a  jal         func_1698E8
    ctx->pc = 0x175C90u;
    SET_GPR_U32(ctx, 31, 0x175C98u);
    ctx->pc = 0x175C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175C90u;
    // 0x175c94: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698E8u, 0x175C90u, 0x175C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C98u;
label_175c98:
    // 0x175c98: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x175c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_175c9c:
    // 0x175c9c: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x175c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x175ca0: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x175ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_175ca4:
    // 0x175ca4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x175CA4u;
    {
        const bool branch_taken_0x175ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA4u;
        // 0x175ca8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ca4) {
            ctx->pc = 0x175CF8u;
            goto label_175cf8;
        }
    }
    ctx->pc = 0x175CACu;
    // 0x175cac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175cb0: 0x2442f400  addiu       $v0, $v0, -0xC00
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
    // 0x175cb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175cb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175cbc: 0x800008  jr          $a0
    ctx->pc = 0x175CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175CC4u: goto label_175cc4;
            case 0x175CD4u: goto label_175cd4;
            case 0x175CF8u: goto label_175cf8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175CBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x175CC4u;
label_175cc4:
    // 0x175cc4: 0xc05a63e  jal         func_1698F8
    ctx->pc = 0x175CC4u;
    SET_GPR_U32(ctx, 31, 0x175CCCu);
    ctx->pc = 0x175CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175CC4u;
    // 0x175cc8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698F8u, 0x175CC4u, 0x175CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175CCCu;
label_175ccc:
    // 0x175ccc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x175CCCu;
    {
        const bool branch_taken_0x175ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CCCu;
        // 0x175cd0: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ccc) {
            ctx->pc = 0x175CF8u;
            goto label_175cf8;
        }
    }
    ctx->pc = 0x175CD4u;
label_175cd4:
    // 0x175cd4: 0xc05a63e  jal         func_1698F8
    ctx->pc = 0x175CD4u;
    SET_GPR_U32(ctx, 31, 0x175CDCu);
    ctx->pc = 0x175CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175CD4u;
    // 0x175cd8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698F8u, 0x175CD4u, 0x175CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175CDCu;
label_175cdc:
    // 0x175cdc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x175cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175ce0: 0xc05a63a  jal         func_1698E8
    ctx->pc = 0x175CE0u;
    SET_GPR_U32(ctx, 31, 0x175CE8u);
    ctx->pc = 0x175CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175CE0u;
    // 0x175ce4: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698E8u, 0x175CE0u, 0x175CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175CE8u;
label_175ce8:
    // 0x175ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175cec: 0x0  nop
    ctx->pc = 0x175cecu;
    // NOP
    // 0x175cf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x175cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x175cf4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x175cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_175cf8:
    // 0x175cf8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x175cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175cfc: 0x16320004  bne         $s1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x175CFCu;
    {
        const bool branch_taken_0x175cfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x175cfc) {
            ctx->pc = 0x175D10u;
            goto label_175d10;
        }
    }
    ctx->pc = 0x175D04u;
    // 0x175d04: 0xc05a646  jal         func_169918
    ctx->pc = 0x175D04u;
    SET_GPR_U32(ctx, 31, 0x175D0Cu);
    ctx->pc = 0x175D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D04u;
    // 0x175d08: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169918u, 0x175D04u, 0x175D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D0Cu;
label_175d0c:
    // 0x175d0c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x175d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_175d10:
    // 0x175d10: 0xc05a624  jal         func_169890
    ctx->pc = 0x175D10u;
    SET_GPR_U32(ctx, 31, 0x175D18u);
    ctx->pc = 0x175D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D10u;
    // 0x175d14: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169890u, 0x175D10u, 0x175D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D18u;
label_175d18:
    // 0x175d18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x175d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x175d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175d20: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x175D20u;
    {
        const bool branch_taken_0x175d20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x175d20) {
            ctx->pc = 0x175D5Cu;
            goto label_175d5c;
        }
    }
    ctx->pc = 0x175D28u;
    // 0x175d28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175D28u;
    {
        const bool branch_taken_0x175d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175d28) {
            ctx->pc = 0x175D3Cu;
            goto label_175d3c;
        }
    }
    ctx->pc = 0x175D30u;
    // 0x175d30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x175d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175d34: 0xfa0100f0  sqc2        $vf1, 0xF0($s0)
    ctx->pc = 0x175d34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x175d38: 0xae120100  sw          $s2, 0x100($s0)
    ctx->pc = 0x175d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 18));
label_175d3c:
    // 0x175d3c: 0xc05a642  jal         func_169908
    ctx->pc = 0x175D3Cu;
    SET_GPR_U32(ctx, 31, 0x175D44u);
    ctx->pc = 0x175D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D3Cu;
    // 0x175d40: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169908u, 0x175D3Cu, 0x175D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D44u;
label_175d44:
    // 0x175d44: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x175d44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x175d48: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175D48u;
    {
        const bool branch_taken_0x175d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D48u;
        // 0x175d4c: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d48) {
            ctx->pc = 0x175D5Cu;
            goto label_175d5c;
        }
    }
    ctx->pc = 0x175D50u;
    // 0x175d50: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x175d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x175d54: 0xa2120068  sb          $s2, 0x68($s0)
    ctx->pc = 0x175d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 18));
    // 0x175d58: 0xa2020069  sb          $v0, 0x69($s0)
    ctx->pc = 0x175d58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 2));
label_175d5c:
    // 0x175d5c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x175D5Cu;
    SET_GPR_U32(ctx, 31, 0x175D64u);
    ctx->pc = 0x175D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D5Cu;
    // 0x175d60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x175D5Cu, 0x175D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D64u;
label_175d64:
    // 0x175d64: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x175d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x175d68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x175d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d6c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x175D6Cu;
    SET_GPR_U32(ctx, 31, 0x175D74u);
    ctx->pc = 0x175D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D6Cu;
    // 0x175d70: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x175D6Cu, 0x175D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D74u;
label_175d74:
    // 0x175d74: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x175d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_175d78:
    // 0x175d78: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x175d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x175d7c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x175d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x175d80: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x175d80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x175d84: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x175d84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x175d88: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x175d88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x175d8c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x175d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x175d90: 0x3e00008  jr          $ra
    ctx->pc = 0x175D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D90u;
        // 0x175d94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175D98u;
}
