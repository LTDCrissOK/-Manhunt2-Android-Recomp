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

// Function: sub_0031BBF0
// Address: 0x31bbf0 - 0x31bda8
void sub_0031BBF0_0x31bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BBF0_0x31bbf0");
#endif

    switch (ctx->pc) {
        case 0x31bc40u: goto label_31bc40;
        case 0x31bc68u: goto label_31bc68;
        case 0x31bc74u: goto label_31bc74;
        case 0x31bc9cu: goto label_31bc9c;
        case 0x31bcb8u: goto label_31bcb8;
        case 0x31bcccu: goto label_31bccc;
        case 0x31bd00u: goto label_31bd00;
        case 0x31bd14u: goto label_31bd14;
        case 0x31bd30u: goto label_31bd30;
        case 0x31bd44u: goto label_31bd44;
        case 0x31bd60u: goto label_31bd60;
        case 0x31bd74u: goto label_31bd74;
        default: break;
    }

    ctx->pc = 0x31bbf0u;

    // 0x31bbf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31bbf4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31bbf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bbfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31bbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31bc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31bc04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31bc08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31bc08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc0c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31bc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31bc10: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31bc14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31bc18: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x31bc18u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31bc1c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31bc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31bc20: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x31bc20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x31bc24: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x31bc28: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x31bc28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x31bc2c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x31bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x31bc30: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x31bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x31bc34: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x31bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x31bc38: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31BC38u;
    SET_GPR_U32(ctx, 31, 0x31BC40u);
    ctx->pc = 0x31BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC38u;
    // 0x31bc3c: 0x3c130047  lui         $s3, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31BC38u, 0x31BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC40u;
label_31bc40:
    // 0x31bc40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x31bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x31bc44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x31bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x31bc48: 0x24422c58  addiu       $v0, $v0, 0x2C58
    ctx->pc = 0x31bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11352));
    // 0x31bc4c: 0x247ed4d8  addiu       $fp, $v1, -0x2B28
    ctx->pc = 0x31bc4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956248));
    // 0x31bc50: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31bc50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31bc54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x31bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x31bc58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31bc5c: 0x2476d4f8  addiu       $s6, $v1, -0x2B08
    ctx->pc = 0x31bc5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956280));
    // 0x31bc60: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x31BC60u;
    {
        const bool branch_taken_0x31bc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC60u;
        // 0x31bc64: 0x2457d518  addiu       $s7, $v0, -0x2AE8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc60) {
            ctx->pc = 0x31BD54u;
            goto label_31bd54;
        }
    }
    ctx->pc = 0x31BC68u;
label_31bc68:
    // 0x31bc68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc6c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BC6Cu;
    SET_GPR_U32(ctx, 31, 0x31BC74u);
    ctx->pc = 0x31BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC6Cu;
    // 0x31bc70: 0x24453be0  addiu       $a1, $v0, 0x3BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BC6Cu, 0x31BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC74u;
label_31bc74:
    // 0x31bc74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bc78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BC78u;
    {
        const bool branch_taken_0x31bc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC78u;
        // 0x31bc7c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc78) {
            ctx->pc = 0x31BC8Cu;
            goto label_31bc8c;
        }
    }
    ctx->pc = 0x31BC80u;
    // 0x31bc80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31BC84u;
    {
        const bool branch_taken_0x31bc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BC84u;
        // 0x31bc88: 0x2442d538  addiu       $v0, $v0, -0x2AC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bc84) {
            ctx->pc = 0x31BCB0u;
            goto label_31bcb0;
        }
    }
    ctx->pc = 0x31BC8Cu;
label_31bc8c:
    // 0x31bc8c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31bc90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bc94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BC94u;
    SET_GPR_U32(ctx, 31, 0x31BC9Cu);
    ctx->pc = 0x31BC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BC94u;
    // 0x31bc98: 0x24453be8  addiu       $a1, $v0, 0x3BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BC94u, 0x31BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BC9Cu;
label_31bc9c:
    // 0x31bc9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bca0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BCA0u;
    {
        const bool branch_taken_0x31bca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCA0u;
        // 0x31bca4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bca0) {
            ctx->pc = 0x31BCC0u;
            goto label_31bcc0;
        }
    }
    ctx->pc = 0x31BCA8u;
    // 0x31bca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31bca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bcac: 0x2442d558  addiu       $v0, $v0, -0x2AA8
    ctx->pc = 0x31bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956376));
label_31bcb0:
    // 0x31bcb0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31BCB0u;
    SET_GPR_U32(ctx, 31, 0x31BCB8u);
    ctx->pc = 0x31BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCB0u;
    // 0x31bcb4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31BCB0u, 0x31BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BCB8u;
label_31bcb8:
    // 0x31bcb8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31BCB8u;
    {
        const bool branch_taken_0x31bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCB8u;
        // 0x31bcbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcb8) {
            ctx->pc = 0x31BD58u;
            goto label_31bd58;
        }
    }
    ctx->pc = 0x31BCC0u;
label_31bcc0:
    // 0x31bcc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bcc4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BCC4u;
    SET_GPR_U32(ctx, 31, 0x31BCCCu);
    ctx->pc = 0x31BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCC4u;
    // 0x31bcc8: 0x26a53bf8  addiu       $a1, $s5, 0x3BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 15352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BCC4u, 0x31BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BCCCu;
label_31bccc:
    // 0x31bccc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bcd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31BCD0u;
    {
        const bool branch_taken_0x31bcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCD0u;
        // 0x31bcd4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bcd0) {
            ctx->pc = 0x31BD08u;
            goto label_31bd08;
        }
    }
    ctx->pc = 0x31BCD8u;
    // 0x31bcd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31bcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bcdc: 0x2442d578  addiu       $v0, $v0, -0x2A88
    ctx->pc = 0x31bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956408));
    // 0x31bce0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x31bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31bce4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31bce8: 0x2442d598  addiu       $v0, $v0, -0x2A68
    ctx->pc = 0x31bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956440));
    // 0x31bcec: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x31bcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31bcf0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31bcf4: 0x2442d5b8  addiu       $v0, $v0, -0x2A48
    ctx->pc = 0x31bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956472));
    // 0x31bcf8: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31BCF8u;
    SET_GPR_U32(ctx, 31, 0x31BD00u);
    ctx->pc = 0x31BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BCF8u;
    // 0x31bcfc: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31BCF8u, 0x31BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD00u;
label_31bd00:
    // 0x31bd00: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31BD00u;
    {
        const bool branch_taken_0x31bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD00u;
        // 0x31bd04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd00) {
            ctx->pc = 0x31BD58u;
            goto label_31bd58;
        }
    }
    ctx->pc = 0x31BD08u;
label_31bd08:
    // 0x31bd08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bd0c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BD0Cu;
    SET_GPR_U32(ctx, 31, 0x31BD14u);
    ctx->pc = 0x31BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD0Cu;
    // 0x31bd10: 0x26853c00  addiu       $a1, $s4, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BD0Cu, 0x31BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD14u;
label_31bd14:
    // 0x31bd14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bd18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BD18u;
    {
        const bool branch_taken_0x31bd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD18u;
        // 0x31bd1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd18) {
            ctx->pc = 0x31BD38u;
            goto label_31bd38;
        }
    }
    ctx->pc = 0x31BD20u;
    // 0x31bd20: 0x23e2821  addu        $a1, $s1, $fp
    ctx->pc = 0x31bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x31bd24: 0x2373021  addu        $a2, $s1, $s7
    ctx->pc = 0x31bd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x31bd28: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31BD28u;
    SET_GPR_U32(ctx, 31, 0x31BD30u);
    ctx->pc = 0x31BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD28u;
    // 0x31bd2c: 0x2363821  addu        $a3, $s1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31BD28u, 0x31BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD30u;
label_31bd30:
    // 0x31bd30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31BD30u;
    {
        const bool branch_taken_0x31bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD30u;
        // 0x31bd34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd30) {
            ctx->pc = 0x31BD58u;
            goto label_31bd58;
        }
    }
    ctx->pc = 0x31BD38u;
label_31bd38:
    // 0x31bd38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bd3c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BD3Cu;
    SET_GPR_U32(ctx, 31, 0x31BD44u);
    ctx->pc = 0x31BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD3Cu;
    // 0x31bd40: 0x26653c08  addiu       $a1, $s3, 0x3C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 15368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BD3Cu, 0x31BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD44u;
label_31bd44:
    // 0x31bd44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bd48: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31BD48u;
    {
        const bool branch_taken_0x31bd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD48u;
        // 0x31bd4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd48) {
            ctx->pc = 0x31BD54u;
            goto label_31bd54;
        }
    }
    ctx->pc = 0x31BD50u;
    // 0x31bd50: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x31bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_31bd54:
    // 0x31bd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31bd58:
    // 0x31bd58: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31BD58u;
    SET_GPR_U32(ctx, 31, 0x31BD60u);
    ctx->pc = 0x31BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD58u;
    // 0x31bd5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31BD58u, 0x31BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD60u;
label_31bd60:
    // 0x31bd60: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x31BD60u;
    {
        const bool branch_taken_0x31bd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD60u;
        // 0x31bd64: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd60) {
            ctx->pc = 0x31BC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bc68;
        }
    }
    ctx->pc = 0x31BD68u;
    // 0x31bd68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31bd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bd6c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31BD6Cu;
    SET_GPR_U32(ctx, 31, 0x31BD74u);
    ctx->pc = 0x31BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD6Cu;
    // 0x31bd70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31BD6Cu, 0x31BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD74u;
label_31bd74:
    // 0x31bd74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31bd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bd78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31bd78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31bd7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31bd7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31bd80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31bd80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31bd84: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31bd84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31bd88: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x31bd88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31bd8c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x31bd8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31bd90: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x31bd90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31bd94: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x31bd94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31bd98: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x31bd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31bd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31BD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD9Cu;
        // 0x31bda0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BDA4u;
    // 0x31bda4: 0x0  nop
    ctx->pc = 0x31bda4u;
    // NOP
    ctx->pc = 0x31bda8u;
}
