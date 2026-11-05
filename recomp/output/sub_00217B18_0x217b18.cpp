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

// Function: sub_00217B18
// Address: 0x217b18 - 0x217d88
void sub_00217B18_0x217b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217B18_0x217b18");
#endif

    switch (ctx->pc) {
        case 0x217b64u: goto label_217b64;
        case 0x217b70u: goto label_217b70;
        case 0x217b7cu: goto label_217b7c;
        case 0x217b88u: goto label_217b88;
        case 0x217b94u: goto label_217b94;
        case 0x217ba0u: goto label_217ba0;
        case 0x217bb0u: goto label_217bb0;
        case 0x217bbcu: goto label_217bbc;
        case 0x217bccu: goto label_217bcc;
        case 0x217bd8u: goto label_217bd8;
        case 0x217be4u: goto label_217be4;
        case 0x217c00u: goto label_217c00;
        case 0x217c18u: goto label_217c18;
        case 0x217c40u: goto label_217c40;
        case 0x217c58u: goto label_217c58;
        case 0x217c9cu: goto label_217c9c;
        case 0x217cb4u: goto label_217cb4;
        case 0x217d00u: goto label_217d00;
        case 0x217d14u: goto label_217d14;
        case 0x217d3cu: goto label_217d3c;
        case 0x217d54u: goto label_217d54;
        case 0x217d68u: goto label_217d68;
        default: break;
    }

    ctx->pc = 0x217b18u;

    // 0x217b18: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x217b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x217b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217b20: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x217b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x217b24: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x217b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x217b28: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x217b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x217b2c: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x217b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x217b30: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x217B30u;
    {
        const bool branch_taken_0x217b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x217B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B30u;
        // 0x217b34: 0xffbf0170  sd          $ra, 0x170($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b30) {
            ctx->pc = 0x217BECu;
            goto label_217bec;
        }
    }
    ctx->pc = 0x217B38u;
    // 0x217b38: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217B38u;
    {
        const bool branch_taken_0x217b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B38u;
        // 0x217b3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b38) {
            ctx->pc = 0x217B58u;
            goto label_217b58;
        }
    }
    ctx->pc = 0x217B40u;
    // 0x217b40: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x217B40u;
    {
        const bool branch_taken_0x217b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x217B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B40u;
        // 0x217b44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b40) {
            ctx->pc = 0x217C2Cu;
            goto label_217c2c;
        }
    }
    ctx->pc = 0x217B48u;
    // 0x217b48: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x217B48u;
    {
        const bool branch_taken_0x217b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x217B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B48u;
        // 0x217b4c: 0x27b200a0  addiu       $s2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b48) {
            ctx->pc = 0x217C88u;
            goto label_217c88;
        }
    }
    ctx->pc = 0x217B50u;
    // 0x217b50: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x217B50u;
    {
        const bool branch_taken_0x217b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B50u;
        // 0x217b54: 0x27b300f0  addiu       $s3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b50) {
            ctx->pc = 0x217CD8u;
            goto label_217cd8;
        }
    }
    ctx->pc = 0x217B58u;
label_217b58:
    // 0x217b58: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x217b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x217b5c: 0xc09eacc  jal         func_27AB30
    ctx->pc = 0x217B5Cu;
    SET_GPR_U32(ctx, 31, 0x217B64u);
    ctx->pc = 0x217B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B5Cu;
    // 0x217b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB30u, 0x217B5Cu, 0x217B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B64u;
label_217b64:
    // 0x217b64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217b68: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x217B68u;
    SET_GPR_U32(ctx, 31, 0x217B70u);
    ctx->pc = 0x217B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B68u;
    // 0x217b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x217B68u, 0x217B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B70u;
label_217b70:
    // 0x217b70: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x217b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x217b74: 0xc09eacc  jal         func_27AB30
    ctx->pc = 0x217B74u;
    SET_GPR_U32(ctx, 31, 0x217B7Cu);
    ctx->pc = 0x217B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B74u;
    // 0x217b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB30u, 0x217B74u, 0x217B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B7Cu;
label_217b7c:
    // 0x217b7c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x217b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x217b80: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217B80u;
    SET_GPR_U32(ctx, 31, 0x217B88u);
    ctx->pc = 0x217B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B80u;
    // 0x217b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217B80u, 0x217B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B88u;
label_217b88:
    // 0x217b88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217b8c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x217B8Cu;
    SET_GPR_U32(ctx, 31, 0x217B94u);
    ctx->pc = 0x217B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B8Cu;
    // 0x217b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x217B8Cu, 0x217B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B94u;
label_217b94:
    // 0x217b94: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x217b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x217b98: 0xc09eab0  jal         func_27AAC0
    ctx->pc = 0x217B98u;
    SET_GPR_U32(ctx, 31, 0x217BA0u);
    ctx->pc = 0x217B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B98u;
    // 0x217b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AAC0u, 0x217B98u, 0x217BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BA0u;
label_217ba0:
    // 0x217ba0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x217ba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ba4: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x217ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x217ba8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217BA8u;
    SET_GPR_U32(ctx, 31, 0x217BB0u);
    ctx->pc = 0x217BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BA8u;
    // 0x217bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217BA8u, 0x217BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BB0u;
label_217bb0:
    // 0x217bb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217bb4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x217BB4u;
    SET_GPR_U32(ctx, 31, 0x217BBCu);
    ctx->pc = 0x217BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BB4u;
    // 0x217bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x217BB4u, 0x217BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BBCu;
label_217bbc:
    // 0x217bbc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x217bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x217bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bc4: 0xc09eae8  jal         func_27ABA0
    ctx->pc = 0x217BC4u;
    SET_GPR_U32(ctx, 31, 0x217BCCu);
    ctx->pc = 0x217BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BC4u;
    // 0x217bc8: 0x261095f8  addiu       $s0, $s0, -0x6A08 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ABA0u, 0x217BC4u, 0x217BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BCCu;
label_217bcc:
    // 0x217bcc: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x217bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x217bd0: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217BD0u;
    SET_GPR_U32(ctx, 31, 0x217BD8u);
    ctx->pc = 0x217BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BD0u;
    // 0x217bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217BD0u, 0x217BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BD8u;
label_217bd8:
    // 0x217bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bdc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x217BDCu;
    SET_GPR_U32(ctx, 31, 0x217BE4u);
    ctx->pc = 0x217BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BDCu;
    // 0x217be0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x217BDCu, 0x217BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BE4u;
label_217be4:
    // 0x217be4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x217BE4u;
    {
        const bool branch_taken_0x217be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BE4u;
        // 0x217be8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217be4) {
            ctx->pc = 0x217CDCu;
            goto label_217cdc;
        }
    }
    ctx->pc = 0x217BECu;
label_217bec:
    // 0x217bec: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x217becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x217bf0: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x217bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x217bf4: 0x8c45ef88  lw          $a1, -0x1078($v0)
    ctx->pc = 0x217bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BEF88u));
    // 0x217bf8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217BF8u;
    SET_GPR_U32(ctx, 31, 0x217C00u);
    ctx->pc = 0x217BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF8u;
    // 0x217bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217BF8u, 0x217C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C00u;
label_217c00:
    // 0x217c00: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x217c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x217c04: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x217c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x217c08: 0x8c65ef80  lw          $a1, -0x1080($v1)
    ctx->pc = 0x217c08u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BEF80u));
    // 0x217c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c10: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217C10u;
    SET_GPR_U32(ctx, 31, 0x217C18u);
    ctx->pc = 0x217C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C10u;
    // 0x217c14: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217C10u, 0x217C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C18u;
label_217c18:
    // 0x217c18: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x217c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x217c1c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x217c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x217c20: 0xdc6415e8  ld          $a0, 0x15E8($v1)
    ctx->pc = 0x217c20u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x4615E8u));
    // 0x217c24: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x217C24u;
    {
        const bool branch_taken_0x217c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C24u;
        // 0x217c28: 0x246215e8  addiu       $v0, $v1, 0x15E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c24) {
            ctx->pc = 0x217CC4u;
            goto label_217cc4;
        }
    }
    ctx->pc = 0x217C2Cu;
label_217c2c:
    // 0x217c2c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x217c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x217c30: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x217c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x217c34: 0x8c45ef98  lw          $a1, -0x1068($v0)
    ctx->pc = 0x217c34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BEF98u));
    // 0x217c38: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217C38u;
    SET_GPR_U32(ctx, 31, 0x217C40u);
    ctx->pc = 0x217C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C38u;
    // 0x217c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217C38u, 0x217C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C40u;
label_217c40:
    // 0x217c40: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x217c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x217c44: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x217c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x217c48: 0x8c65ef90  lw          $a1, -0x1070($v1)
    ctx->pc = 0x217c48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BEF90u));
    // 0x217c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c50: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217C50u;
    SET_GPR_U32(ctx, 31, 0x217C58u);
    ctx->pc = 0x217C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C50u;
    // 0x217c54: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217C50u, 0x217C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C58u;
label_217c58:
    // 0x217c58: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x217c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x217c5c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x217c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x217c60: 0xdc6615f8  ld          $a2, 0x15F8($v1)
    ctx->pc = 0x217c60u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x4615F8u));
    // 0x217c64: 0x246215f8  addiu       $v0, $v1, 0x15F8
    ctx->pc = 0x217c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5624));
    // 0x217c68: 0x9447000c  lhu         $a3, 0xC($v0)
    ctx->pc = 0x217c68u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x461604u));
    // 0x217c6c: 0x24a395f8  addiu       $v1, $a1, -0x6A08
    ctx->pc = 0x217c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940152));
    // 0x217c70: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x217c70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x461600u));
    // 0x217c74: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x217c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c78: 0xfca695f8  sd          $a2, -0x6A08($a1)
    ctx->pc = 0x217c78u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3F95F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3F95F8u, _value); } while (0);
    // 0x217c7c: 0xa467000c  sh          $a3, 0xC($v1)
    ctx->pc = 0x217c7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3F9604u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3F9604u, _value); } while (0);
    // 0x217c80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x217C80u;
    {
        const bool branch_taken_0x217c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C80u;
        // 0x217c84: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c80) {
            ctx->pc = 0x217CD8u;
            goto label_217cd8;
        }
    }
    ctx->pc = 0x217C88u;
label_217c88:
    // 0x217c88: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x217c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x217c8c: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x217c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x217c90: 0x8c45efb8  lw          $a1, -0x1048($v0)
    ctx->pc = 0x217c90u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BEFB8u));
    // 0x217c94: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217C94u;
    SET_GPR_U32(ctx, 31, 0x217C9Cu);
    ctx->pc = 0x217C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C94u;
    // 0x217c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217C94u, 0x217C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C9Cu;
label_217c9c:
    // 0x217c9c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x217c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x217ca0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x217ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x217ca4: 0x8c65efb0  lw          $a1, -0x1050($v1)
    ctx->pc = 0x217ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BEFB0u));
    // 0x217ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cac: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x217CACu;
    SET_GPR_U32(ctx, 31, 0x217CB4u);
    ctx->pc = 0x217CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CACu;
    // 0x217cb0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x217CACu, 0x217CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CB4u;
label_217cb4:
    // 0x217cb4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x217cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x217cb8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x217cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x217cbc: 0xdc641608  ld          $a0, 0x1608($v1)
    ctx->pc = 0x217cbcu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x461608u));
    // 0x217cc0: 0x24621608  addiu       $v0, $v1, 0x1608
    ctx->pc = 0x217cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5640));
label_217cc4:
    // 0x217cc4: 0x94460008  lhu         $a2, 0x8($v0)
    ctx->pc = 0x217cc4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x217cc8: 0x24a395f8  addiu       $v1, $a1, -0x6A08
    ctx->pc = 0x217cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940152));
    // 0x217ccc: 0xfca495f8  sd          $a0, -0x6A08($a1)
    ctx->pc = 0x217cccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294940152), GPR_U64(ctx, 4));
    // 0x217cd0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x217cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cd4: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x217cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
label_217cd8:
    // 0x217cd8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x217cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_217cdc:
    // 0x217cdc: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x217cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942272)));
    // 0x217ce0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x217ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x217ce4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x217CE4u;
    {
        const bool branch_taken_0x217ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CE4u;
        // 0x217ce8: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ce4) {
            ctx->pc = 0x217D1Cu;
            goto label_217d1c;
        }
    }
    ctx->pc = 0x217CECu;
    // 0x217cec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x217cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cf0: 0x26101618  addiu       $s0, $s0, 0x1618
    ctx->pc = 0x217cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5656));
    // 0x217cf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x217cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217cf8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x217CF8u;
    SET_GPR_U32(ctx, 31, 0x217D00u);
    ctx->pc = 0x217CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CF8u;
    // 0x217cfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x217CF8u, 0x217D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D00u;
label_217d00:
    // 0x217d00: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x217d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x217d04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x217d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d0c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x217D0Cu;
    SET_GPR_U32(ctx, 31, 0x217D14u);
    ctx->pc = 0x217D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D0Cu;
    // 0x217d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x217D0Cu, 0x217D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D14u;
label_217d14:
    // 0x217d14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x217D14u;
    {
        const bool branch_taken_0x217d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D14u;
        // 0x217d18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d14) {
            ctx->pc = 0x217D58u;
            goto label_217d58;
        }
    }
    ctx->pc = 0x217D1Cu;
label_217d1c:
    // 0x217d1c: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x217d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x217d20: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x217d20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x217d24: 0x26311620  addiu       $s1, $s1, 0x1620
    ctx->pc = 0x217d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5664));
    // 0x217d28: 0x8e06ee20  lw          $a2, -0x11E0($s0)
    ctx->pc = 0x217d28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BEE20u));
    // 0x217d2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x217d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x217d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d34: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x217D34u;
    SET_GPR_U32(ctx, 31, 0x217D3Cu);
    ctx->pc = 0x217D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D34u;
    // 0x217d38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x217D34u, 0x217D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D3Cu;
label_217d3c:
    // 0x217d3c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x217d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x217d40: 0x8e06ee20  lw          $a2, -0x11E0($s0)
    ctx->pc = 0x217d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962720)));
    // 0x217d44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x217d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x217d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d4c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x217D4Cu;
    SET_GPR_U32(ctx, 31, 0x217D54u);
    ctx->pc = 0x217D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D4Cu;
    // 0x217d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x217D4Cu, 0x217D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D54u;
label_217d54:
    // 0x217d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x217d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_217d58:
    // 0x217d58: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x217d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x217d5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x217d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d60: 0xc0c3346  jal         func_30CD18
    ctx->pc = 0x217D60u;
    SET_GPR_U32(ctx, 31, 0x217D68u);
    ctx->pc = 0x217D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D60u;
    // 0x217d64: 0x24843588  addiu       $a0, $a0, 0x3588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CD18u, 0x217D60u, 0x217D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D68u;
label_217d68:
    // 0x217d68: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x217d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x217d6c: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x217d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x217d70: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x217d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x217d74: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x217d74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x217d78: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x217d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x217d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x217D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D7Cu;
        // 0x217d80: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217D84u;
    // 0x217d84: 0x0  nop
    ctx->pc = 0x217d84u;
    // NOP
    ctx->pc = 0x217d88u;
}
