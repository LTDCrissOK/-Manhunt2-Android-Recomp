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

// Function: sub_00202C10
// Address: 0x202c10 - 0x203340
void sub_00202C10_0x202c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202C10_0x202c10");
#endif

    switch (ctx->pc) {
        case 0x202c54u: goto label_202c54;
        case 0x202c68u: goto label_202c68;
        case 0x202c74u: goto label_202c74;
        case 0x202c8cu: goto label_202c8c;
        case 0x202c9cu: goto label_202c9c;
        case 0x202cb4u: goto label_202cb4;
        case 0x202cbcu: goto label_202cbc;
        case 0x202cccu: goto label_202ccc;
        case 0x202cdcu: goto label_202cdc;
        case 0x202ce8u: goto label_202ce8;
        case 0x202cf8u: goto label_202cf8;
        case 0x202d28u: goto label_202d28;
        case 0x202d30u: goto label_202d30;
        case 0x202d48u: goto label_202d48;
        case 0x202d90u: goto label_202d90;
        case 0x202da4u: goto label_202da4;
        case 0x202dc0u: goto label_202dc0;
        case 0x202e44u: goto label_202e44;
        case 0x202e58u: goto label_202e58;
        case 0x202e70u: goto label_202e70;
        case 0x202e90u: goto label_202e90;
        case 0x202ea8u: goto label_202ea8;
        case 0x202eb4u: goto label_202eb4;
        case 0x202ec8u: goto label_202ec8;
        case 0x202ee4u: goto label_202ee4;
        case 0x202f04u: goto label_202f04;
        case 0x202f18u: goto label_202f18;
        case 0x202f34u: goto label_202f34;
        case 0x202f44u: goto label_202f44;
        case 0x202f5cu: goto label_202f5c;
        case 0x202f7cu: goto label_202f7c;
        case 0x202f94u: goto label_202f94;
        case 0x202fb8u: goto label_202fb8;
        case 0x202fc4u: goto label_202fc4;
        case 0x202fdcu: goto label_202fdc;
        case 0x202ff8u: goto label_202ff8;
        case 0x20300cu: goto label_20300c;
        case 0x203018u: goto label_203018;
        case 0x203038u: goto label_203038;
        case 0x203050u: goto label_203050;
        case 0x20305cu: goto label_20305c;
        case 0x203070u: goto label_203070;
        case 0x20307cu: goto label_20307c;
        case 0x20309cu: goto label_20309c;
        case 0x2030b0u: goto label_2030b0;
        case 0x2030b8u: goto label_2030b8;
        case 0x2030c8u: goto label_2030c8;
        case 0x2030d4u: goto label_2030d4;
        case 0x2030f4u: goto label_2030f4;
        case 0x203108u: goto label_203108;
        case 0x203114u: goto label_203114;
        case 0x203124u: goto label_203124;
        case 0x203130u: goto label_203130;
        case 0x203150u: goto label_203150;
        case 0x203168u: goto label_203168;
        case 0x2031f0u: goto label_2031f0;
        case 0x203200u: goto label_203200;
        case 0x20320cu: goto label_20320c;
        case 0x203224u: goto label_203224;
        case 0x2032b4u: goto label_2032b4;
        case 0x2032c0u: goto label_2032c0;
        case 0x2032d4u: goto label_2032d4;
        case 0x2032e4u: goto label_2032e4;
        case 0x2032f0u: goto label_2032f0;
        case 0x2032fcu: goto label_2032fc;
        case 0x203308u: goto label_203308;
        default: break;
    }

    ctx->pc = 0x202c10u;

    // 0x202c10: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x202c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x202c14: 0xafa40184  sw          $a0, 0x184($sp)
    ctx->pc = 0x202c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 4));
    // 0x202c18: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x202c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x202c1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c20: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x202c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
    // 0x202c24: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x202c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x202c28: 0xffb301a8  sd          $s3, 0x1A8($sp)
    ctx->pc = 0x202c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 19));
    // 0x202c2c: 0xffb401b0  sd          $s4, 0x1B0($sp)
    ctx->pc = 0x202c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 20));
    // 0x202c30: 0xffb501b8  sd          $s5, 0x1B8($sp)
    ctx->pc = 0x202c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 21));
    // 0x202c34: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x202c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x202c38: 0xffb701c8  sd          $s7, 0x1C8($sp)
    ctx->pc = 0x202c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 23));
    // 0x202c3c: 0xffbe01d0  sd          $fp, 0x1D0($sp)
    ctx->pc = 0x202c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 30));
    // 0x202c40: 0xffbf01d8  sd          $ra, 0x1D8($sp)
    ctx->pc = 0x202c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 31));
    // 0x202c44: 0xe7b401e0  swc1        $f20, 0x1E0($sp)
    ctx->pc = 0x202c44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x202c48: 0xafa6018c  sw          $a2, 0x18C($sp)
    ctx->pc = 0x202c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 6));
    // 0x202c4c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x202C4Cu;
    SET_GPR_U32(ctx, 31, 0x202C54u);
    ctx->pc = 0x202C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C4Cu;
    // 0x202c50: 0xafa50188  sw          $a1, 0x188($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x202C4Cu, 0x202C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C54u;
label_202c54:
    // 0x202c54: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x202c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x202c58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202C58u;
    {
        const bool branch_taken_0x202c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C58u;
        // 0x202c5c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c58) {
            ctx->pc = 0x202C7Cu;
            goto label_202c7c;
        }
    }
    ctx->pc = 0x202C60u;
    // 0x202c60: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x202C60u;
    SET_GPR_U32(ctx, 31, 0x202C68u);
    ctx->pc = 0x202C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C60u;
    // 0x202c64: 0x24840468  addiu       $a0, $a0, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x202C60u, 0x202C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C68u;
label_202c68:
    // 0x202c68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x202c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c6c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x202C6Cu;
    SET_GPR_U32(ctx, 31, 0x202C74u);
    ctx->pc = 0x202C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C6Cu;
    // 0x202c70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x202C6Cu, 0x202C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C74u;
label_202c74:
    // 0x202c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202C74u;
    {
        const bool branch_taken_0x202c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C74u;
        // 0x202c78: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c74) {
            ctx->pc = 0x202C90u;
            goto label_202c90;
        }
    }
    ctx->pc = 0x202C7Cu;
label_202c7c:
    // 0x202c7c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x202c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x202c80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c84: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x202C84u;
    SET_GPR_U32(ctx, 31, 0x202C8Cu);
    ctx->pc = 0x202C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C84u;
    // 0x202c88: 0x24a50468  addiu       $a1, $a1, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x202C84u, 0x202C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C8Cu;
label_202c8c:
    // 0x202c8c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x202c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_202c90:
    // 0x202c90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c94: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x202C94u;
    SET_GPR_U32(ctx, 31, 0x202C9Cu);
    ctx->pc = 0x202C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C94u;
    // 0x202c98: 0x24a507e8  addiu       $a1, $a1, 0x7E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x202C94u, 0x202C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C9Cu;
label_202c9c:
    // 0x202c9c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x202c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x202ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x202ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ca4: 0x2476fe40  addiu       $s6, $v1, -0x1C0
    ctx->pc = 0x202ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x202ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x202ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cac: 0xc09dd98  jal         func_277660
    ctx->pc = 0x202CACu;
    SET_GPR_U32(ctx, 31, 0x202CB4u);
    ctx->pc = 0x202CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CACu;
    // 0x202cb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x202CACu, 0x202CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CB4u;
label_202cb4:
    // 0x202cb4: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x202CB4u;
    SET_GPR_U32(ctx, 31, 0x202CBCu);
    ctx->pc = 0x202CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CB4u;
    // 0x202cb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x202CB4u, 0x202CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CBCu;
label_202cbc:
    // 0x202cbc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x202cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x202cc0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x202cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x202cc4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x202CC4u;
    SET_GPR_U32(ctx, 31, 0x202CCCu);
    ctx->pc = 0x202CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CC4u;
    // 0x202cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x202CC4u, 0x202CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CCCu;
label_202ccc:
    // 0x202ccc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x202cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x202cd0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x202cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x202cd4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x202CD4u;
    SET_GPR_U32(ctx, 31, 0x202CDCu);
    ctx->pc = 0x202CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CD4u;
    // 0x202cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x202CD4u, 0x202CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CDCu;
label_202cdc:
    // 0x202cdc: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x202CDCu;
    {
        const bool branch_taken_0x202cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CDCu;
        // 0x202ce0: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cdc) {
            ctx->pc = 0x2032C8u;
            goto label_2032c8;
        }
    }
    ctx->pc = 0x202CE4u;
    // 0x202ce4: 0x0  nop
    ctx->pc = 0x202ce4u;
    // NOP
label_202ce8:
    // 0x202ce8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x202ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x202cec: 0x24a507f8  addiu       $a1, $a1, 0x7F8
    ctx->pc = 0x202cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2040));
    // 0x202cf0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202CF0u;
    SET_GPR_U32(ctx, 31, 0x202CF8u);
    ctx->pc = 0x202CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CF0u;
    // 0x202cf4: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202CF0u, 0x202CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CF8u;
label_202cf8:
    // 0x202cf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202cfc: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x202CFCu;
    {
        const bool branch_taken_0x202cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CFCu;
        // 0x202d00: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cfc) {
            ctx->pc = 0x203028u;
            goto label_203028;
        }
    }
    ctx->pc = 0x202D04u;
    // 0x202d04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202d08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x202d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x202d0c: 0x3c1e0046  lui         $fp, 0x46
    ctx->pc = 0x202d0cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)70 << 16));
    // 0x202d10: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x202d10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x202d14: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x202d14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
    // 0x202d18: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x202d1c: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x202d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x202d20: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x202D20u;
    {
        const bool branch_taken_0x202d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D20u;
        // 0x202d24: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d20) {
            ctx->pc = 0x20300Cu;
            goto label_20300c;
        }
    }
    ctx->pc = 0x202D28u;
label_202d28:
    // 0x202d28: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202D28u;
    SET_GPR_U32(ctx, 31, 0x202D30u);
    ctx->pc = 0x202D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D28u;
    // 0x202d2c: 0x27c50800  addiu       $a1, $fp, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202D28u, 0x202D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D30u;
label_202d30:
    // 0x202d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202d34: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x202D34u;
    {
        const bool branch_taken_0x202d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D34u;
        // 0x202d38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d34) {
            ctx->pc = 0x202D98u;
            goto label_202d98;
        }
    }
    ctx->pc = 0x202D3Cu;
    // 0x202d3c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x202d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x202d40: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x202D40u;
    SET_GPR_U32(ctx, 31, 0x202D48u);
    ctx->pc = 0x202D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D40u;
    // 0x202d44: 0x27a60134  addiu       $a2, $sp, 0x134 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x202D40u, 0x202D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D48u;
label_202d48:
    // 0x202d48: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x202d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x202d4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x202d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202d50: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x202d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202d54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x202d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202d58: 0x0  nop
    ctx->pc = 0x202d58u;
    // NOP
    // 0x202d5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x202D5Cu;
    {
        const bool branch_taken_0x202d5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202d5c) {
            ctx->pc = 0x202D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202D5Cu;
            // 0x202d60: 0xe7a10130  swc1        $f1, 0x130($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x202D64u;
            goto label_202d64;
        }
    }
    ctx->pc = 0x202D64u;
label_202d64:
    // 0x202d64: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x202d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202d68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x202d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202d6c: 0x0  nop
    ctx->pc = 0x202d6cu;
    // NOP
    // 0x202d70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x202D70u;
    {
        const bool branch_taken_0x202d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202d70) {
            ctx->pc = 0x202D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202D70u;
            // 0x202d74: 0xe7a10134  swc1        $f1, 0x134($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x202D78u;
            goto label_202d78;
        }
    }
    ctx->pc = 0x202D78u;
label_202d78:
    // 0x202d78: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x202d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202d7c: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x202d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x202d80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x202d80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x202d84: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x202d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x202d88: 0xc07d6e8  jal         func_1F5BA0
    ctx->pc = 0x202D88u;
    SET_GPR_U32(ctx, 31, 0x202D90u);
    ctx->pc = 0x202D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D88u;
    // 0x202d8c: 0xc7ac0134  lwc1        $f12, 0x134($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5BA0u, 0x202D88u, 0x202D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D90u;
label_202d90:
    // 0x202d90: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x202D90u;
    {
        const bool branch_taken_0x202d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D90u;
        // 0x202d94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d90) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202D98u;
label_202d98:
    // 0x202d98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202D9Cu;
    SET_GPR_U32(ctx, 31, 0x202DA4u);
    ctx->pc = 0x202DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D9Cu;
    // 0x202da0: 0x26a50808  addiu       $a1, $s5, 0x808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202D9Cu, 0x202DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DA4u;
label_202da4:
    // 0x202da4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202da8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x202DA8u;
    {
        const bool branch_taken_0x202da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DA8u;
        // 0x202dac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202da8) {
            ctx->pc = 0x202E4Cu;
            goto label_202e4c;
        }
    }
    ctx->pc = 0x202DB0u;
    // 0x202db0: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x202db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x202db4: 0x27a6013c  addiu       $a2, $sp, 0x13C
    ctx->pc = 0x202db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x202db8: 0xc09df62  jal         func_277D88
    ctx->pc = 0x202DB8u;
    SET_GPR_U32(ctx, 31, 0x202DC0u);
    ctx->pc = 0x202DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DB8u;
    // 0x202dbc: 0x27a70140  addiu       $a3, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x202DB8u, 0x202DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DC0u;
label_202dc0:
    // 0x202dc0: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x202dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x202dc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x202dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202dc8: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x202dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202dcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x202dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202dd0: 0x0  nop
    ctx->pc = 0x202dd0u;
    // NOP
    // 0x202dd4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x202DD4u;
    {
        const bool branch_taken_0x202dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202dd4) {
            ctx->pc = 0x202DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202DD4u;
            // 0x202dd8: 0xe7a1013c  swc1        $f1, 0x13C($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x202DDCu;
            goto label_202ddc;
        }
    }
    ctx->pc = 0x202DDCu;
label_202ddc:
    // 0x202ddc: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x202ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202de0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x202de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202de4: 0x0  nop
    ctx->pc = 0x202de4u;
    // NOP
    // 0x202de8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x202DE8u;
    {
        const bool branch_taken_0x202de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202de8) {
            ctx->pc = 0x202DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202DE8u;
            // 0x202dec: 0xe7a10140  swc1        $f1, 0x140($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x202DF0u;
            goto label_202df0;
        }
    }
    ctx->pc = 0x202DF0u;
label_202df0:
    // 0x202df0: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x202df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202df8: 0x0  nop
    ctx->pc = 0x202df8u;
    // NOP
    // 0x202dfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x202dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202e00: 0x0  nop
    ctx->pc = 0x202e00u;
    // NOP
    // 0x202e04: 0x45000082  bc1f        . + 4 + (0x82 << 2)
    ctx->pc = 0x202E04u;
    {
        const bool branch_taken_0x202e04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x202E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E04u;
        // 0x202e08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e04) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202E0Cu;
    // 0x202e0c: 0x3c0142c4  lui         $at, 0x42C4
    ctx->pc = 0x202e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17092 << 16));
    // 0x202e10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e14: 0x0  nop
    ctx->pc = 0x202e14u;
    // NOP
    // 0x202e18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x202e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202e1c: 0x0  nop
    ctx->pc = 0x202e1cu;
    // NOP
    // 0x202e20: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
    ctx->pc = 0x202E20u;
    {
        const bool branch_taken_0x202e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x202E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E20u;
        // 0x202e24: 0xc7a0013c  lwc1        $f0, 0x13C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e20) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202E28u;
    // 0x202e28: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x202e28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x202e2c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x202e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x202e30: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x202e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202e34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x202e34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x202e38: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x202e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x202e3c: 0xc07d6fa  jal         func_1F5BE8
    ctx->pc = 0x202E3Cu;
    SET_GPR_U32(ctx, 31, 0x202E44u);
    ctx->pc = 0x202E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E3Cu;
    // 0x202e40: 0x26040480  addiu       $a0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5BE8u, 0x202E3Cu, 0x202E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E44u;
label_202e44:
    // 0x202e44: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x202E44u;
    {
        const bool branch_taken_0x202e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E44u;
        // 0x202e48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e44) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202E4Cu;
label_202e4c:
    // 0x202e4c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202E50u;
    SET_GPR_U32(ctx, 31, 0x202E58u);
    ctx->pc = 0x202E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E50u;
    // 0x202e54: 0x26850820  addiu       $a1, $s4, 0x820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202E50u, 0x202E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E58u;
label_202e58:
    // 0x202e58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202e5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202E5Cu;
    {
        const bool branch_taken_0x202e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E5Cu;
        // 0x202e60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e5c) {
            ctx->pc = 0x202E84u;
            goto label_202e84;
        }
    }
    ctx->pc = 0x202E64u;
    // 0x202e64: 0xe7b40144  swc1        $f20, 0x144($sp)
    ctx->pc = 0x202e64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x202e68: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x202E68u;
    SET_GPR_U32(ctx, 31, 0x202E70u);
    ctx->pc = 0x202E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E68u;
    // 0x202e6c: 0x27a50144  addiu       $a1, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x202E68u, 0x202E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E70u;
label_202e70:
    // 0x202e70: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x202e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202e74: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x202e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x202e78: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x202e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x202e7c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x202E7Cu;
    {
        const bool branch_taken_0x202e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E7Cu;
        // 0x202e80: 0xe4401624  swc1        $f0, 0x1624($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e7c) {
            ctx->pc = 0x20300Cu;
            goto label_20300c;
        }
    }
    ctx->pc = 0x202E84u;
label_202e84:
    // 0x202e84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202E88u;
    SET_GPR_U32(ctx, 31, 0x202E90u);
    ctx->pc = 0x202E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E88u;
    // 0x202e8c: 0x26650840  addiu       $a1, $s3, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202E88u, 0x202E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E90u;
label_202e90:
    // 0x202e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202e94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202E94u;
    {
        const bool branch_taken_0x202e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E94u;
        // 0x202e98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e94) {
            ctx->pc = 0x202EBCu;
            goto label_202ebc;
        }
    }
    ctx->pc = 0x202E9Cu;
    // 0x202e9c: 0xe7b40148  swc1        $f20, 0x148($sp)
    ctx->pc = 0x202e9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x202ea0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x202EA0u;
    SET_GPR_U32(ctx, 31, 0x202EA8u);
    ctx->pc = 0x202EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EA0u;
    // 0x202ea4: 0x27a50148  addiu       $a1, $sp, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x202EA0u, 0x202EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EA8u;
label_202ea8:
    // 0x202ea8: 0xc7ac0148  lwc1        $f12, 0x148($sp)
    ctx->pc = 0x202ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202eac: 0xc07e704  jal         func_1F9C10
    ctx->pc = 0x202EACu;
    SET_GPR_U32(ctx, 31, 0x202EB4u);
    ctx->pc = 0x202EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EACu;
    // 0x202eb0: 0x26040480  addiu       $a0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C10u, 0x202EACu, 0x202EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EB4u;
label_202eb4:
    // 0x202eb4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x202EB4u;
    {
        const bool branch_taken_0x202eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EB4u;
        // 0x202eb8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202eb4) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202EBCu;
label_202ebc:
    // 0x202ebc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ec0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202EC0u;
    SET_GPR_U32(ctx, 31, 0x202EC8u);
    ctx->pc = 0x202EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EC0u;
    // 0x202ec4: 0x26450858  addiu       $a1, $s2, 0x858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202EC0u, 0x202EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EC8u;
label_202ec8:
    // 0x202ec8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202ecc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x202ECCu;
    {
        const bool branch_taken_0x202ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202ECCu;
        // 0x202ed0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ecc) {
            ctx->pc = 0x202F0Cu;
            goto label_202f0c;
        }
    }
    ctx->pc = 0x202ED4u;
    // 0x202ed4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x202ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ed8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x202ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x202edc: 0xc09e056  jal         func_278158
    ctx->pc = 0x202EDCu;
    SET_GPR_U32(ctx, 31, 0x202EE4u);
    ctx->pc = 0x202EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EDCu;
    // 0x202ee0: 0x27a5014c  addiu       $a1, $sp, 0x14C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x202EDCu, 0x202EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EE4u;
label_202ee4:
    // 0x202ee4: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x202ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202eec: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x202eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
    // 0x202ef0: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x202ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
    // 0x202ef4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x202ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202ef8: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x202ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x202efc: 0xc07e708  jal         func_1F9C20
    ctx->pc = 0x202EFCu;
    SET_GPR_U32(ctx, 31, 0x202F04u);
    ctx->pc = 0x202F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EFCu;
    // 0x202f00: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C20u, 0x202EFCu, 0x202F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F04u;
label_202f04:
    // 0x202f04: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x202F04u;
    {
        const bool branch_taken_0x202f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F04u;
        // 0x202f08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f04) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202F0Cu;
label_202f0c:
    // 0x202f0c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f10: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202F10u;
    SET_GPR_U32(ctx, 31, 0x202F18u);
    ctx->pc = 0x202F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F10u;
    // 0x202f14: 0x26250868  addiu       $a1, $s1, 0x868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202F10u, 0x202F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F18u;
label_202f18:
    // 0x202f18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202f1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x202F1Cu;
    {
        const bool branch_taken_0x202f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F1Cu;
        // 0x202f20: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f1c) {
            ctx->pc = 0x202F4Cu;
            goto label_202f4c;
        }
    }
    ctx->pc = 0x202F24u;
    // 0x202f24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x202f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f28: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x202f2c: 0xc09e056  jal         func_278158
    ctx->pc = 0x202F2Cu;
    SET_GPR_U32(ctx, 31, 0x202F34u);
    ctx->pc = 0x202F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F2Cu;
    // 0x202f30: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x202F2Cu, 0x202F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F34u;
label_202f34:
    // 0x202f34: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x202f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x202f38: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x202f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x202f3c: 0xc080622  jal         func_201888
    ctx->pc = 0x202F3Cu;
    SET_GPR_U32(ctx, 31, 0x202F44u);
    ctx->pc = 0x202F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F3Cu;
    // 0x202f40: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201888u, 0x202F3Cu, 0x202F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F44u;
label_202f44:
    // 0x202f44: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x202F44u;
    {
        const bool branch_taken_0x202f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F44u;
        // 0x202f48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f44) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202F4Cu;
label_202f4c:
    // 0x202f4c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x202f50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202F54u;
    SET_GPR_U32(ctx, 31, 0x202F5Cu);
    ctx->pc = 0x202F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F54u;
    // 0x202f58: 0x24a50880  addiu       $a1, $a1, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202F54u, 0x202F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F5Cu;
label_202f5c:
    // 0x202f5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202f60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202F60u;
    {
        const bool branch_taken_0x202f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F60u;
        // 0x202f64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f60) {
            ctx->pc = 0x202F84u;
            goto label_202f84;
        }
    }
    ctx->pc = 0x202F68u;
    // 0x202f68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x202f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x202f6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202f70: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x202f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x202f74: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x202F74u;
    SET_GPR_U32(ctx, 31, 0x202F7Cu);
    ctx->pc = 0x202F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F74u;
    // 0x202f78: 0xe7a00154  swc1        $f0, 0x154($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x202F74u, 0x202F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F7Cu;
label_202f7c:
    // 0x202f7c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x202F7Cu;
    {
        const bool branch_taken_0x202f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F7Cu;
        // 0x202f80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f7c) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202F84u;
label_202f84:
    // 0x202f84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x202f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x202f88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202F8Cu;
    SET_GPR_U32(ctx, 31, 0x202F94u);
    ctx->pc = 0x202F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F8Cu;
    // 0x202f90: 0x24a50898  addiu       $a1, $a1, 0x898 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202F8Cu, 0x202F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F94u;
label_202f94:
    // 0x202f94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202f98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x202F98u;
    {
        const bool branch_taken_0x202f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F98u;
        // 0x202f9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f98) {
            ctx->pc = 0x202FCCu;
            goto label_202fcc;
        }
    }
    ctx->pc = 0x202FA0u;
    // 0x202fa0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x202fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x202fa4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x202fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x202fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202fac: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x202facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x202fb0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x202FB0u;
    SET_GPR_U32(ctx, 31, 0x202FB8u);
    ctx->pc = 0x202FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FB0u;
    // 0x202fb4: 0xe7a00158  swc1        $f0, 0x158($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x202FB0u, 0x202FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FB8u;
label_202fb8:
    // 0x202fb8: 0xc7ac0158  lwc1        $f12, 0x158($sp)
    ctx->pc = 0x202fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202fbc: 0xc07d724  jal         func_1F5C90
    ctx->pc = 0x202FBCu;
    SET_GPR_U32(ctx, 31, 0x202FC4u);
    ctx->pc = 0x202FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FBCu;
    // 0x202fc0: 0x26040480  addiu       $a0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5C90u, 0x202FBCu, 0x202FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FC4u;
label_202fc4:
    // 0x202fc4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x202FC4u;
    {
        const bool branch_taken_0x202fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FC4u;
        // 0x202fc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fc4) {
            ctx->pc = 0x203010u;
            goto label_203010;
        }
    }
    ctx->pc = 0x202FCCu;
label_202fcc:
    // 0x202fcc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x202fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x202fd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x202FD4u;
    SET_GPR_U32(ctx, 31, 0x202FDCu);
    ctx->pc = 0x202FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FD4u;
    // 0x202fd8: 0x24a508b0  addiu       $a1, $a1, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x202FD4u, 0x202FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FDCu;
label_202fdc:
    // 0x202fdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x202fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x202fe0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x202FE0u;
    {
        const bool branch_taken_0x202fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE0u;
        // 0x202fe4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe0) {
            ctx->pc = 0x20300Cu;
            goto label_20300c;
        }
    }
    ctx->pc = 0x202FE8u;
    // 0x202fe8: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x202fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x202fec: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x202fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x202ff0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x202FF0u;
    SET_GPR_U32(ctx, 31, 0x202FF8u);
    ctx->pc = 0x202FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FF0u;
    // 0x202ff4: 0x27a70164  addiu       $a3, $sp, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x202FF0u, 0x202FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FF8u;
label_202ff8:
    // 0x202ff8: 0xc7ac015c  lwc1        $f12, 0x15C($sp)
    ctx->pc = 0x202ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x202ffc: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x202ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x203000: 0xc7ad0160  lwc1        $f13, 0x160($sp)
    ctx->pc = 0x203000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x203004: 0xc07dfae  jal         func_1F7EB8
    ctx->pc = 0x203004u;
    SET_GPR_U32(ctx, 31, 0x20300Cu);
    ctx->pc = 0x203008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203004u;
    // 0x203008: 0xc7ae0164  lwc1        $f14, 0x164($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB8u, 0x203004u, 0x20300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20300Cu;
label_20300c:
    // 0x20300c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_203010:
    // 0x203010: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x203010u;
    SET_GPR_U32(ctx, 31, 0x203018u);
    ctx->pc = 0x203014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203010u;
    // 0x203014: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x203010u, 0x203018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203018u;
label_203018:
    // 0x203018: 0x1440ff43  bnez        $v0, . + 4 + (-0xBD << 2)
    ctx->pc = 0x203018u;
    {
        const bool branch_taken_0x203018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203018u;
        // 0x20301c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203018) {
            ctx->pc = 0x202D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202d28;
        }
    }
    ctx->pc = 0x203020u;
    // 0x203020: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x203020u;
    {
        const bool branch_taken_0x203020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203020u;
        // 0x203024: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203020) {
            ctx->pc = 0x2032CCu;
            goto label_2032cc;
        }
    }
    ctx->pc = 0x203028u;
label_203028:
    // 0x203028: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x203028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20302c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x20302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x203030: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x203030u;
    SET_GPR_U32(ctx, 31, 0x203038u);
    ctx->pc = 0x203034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203030u;
    // 0x203034: 0x24a508c0  addiu       $a1, $a1, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x203030u, 0x203038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203038u;
label_203038:
    // 0x203038: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x203038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20303c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20303Cu;
    {
        const bool branch_taken_0x20303c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20303Cu;
        // 0x203040: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20303c) {
            ctx->pc = 0x20308Cu;
            goto label_20308c;
        }
    }
    ctx->pc = 0x203044u;
    // 0x203044: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x203044u;
    {
        const bool branch_taken_0x203044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203044u;
        // 0x203048: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203044) {
            ctx->pc = 0x203074u;
            goto label_203074;
        }
    }
    ctx->pc = 0x20304Cu;
    // 0x20304c: 0x0  nop
    ctx->pc = 0x20304cu;
    // NOP
label_203050:
    // 0x203050: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x203050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x203054: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x203054u;
    SET_GPR_U32(ctx, 31, 0x20305Cu);
    ctx->pc = 0x203058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203054u;
    // 0x203058: 0x27a6016c  addiu       $a2, $sp, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x203054u, 0x20305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20305Cu;
label_20305c:
    // 0x20305c: 0xc7ac0168  lwc1        $f12, 0x168($sp)
    ctx->pc = 0x20305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203060: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x203064: 0xc7ad016c  lwc1        $f13, 0x16C($sp)
    ctx->pc = 0x203064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x203068: 0xc07d728  jal         func_1F5CA0
    ctx->pc = 0x203068u;
    SET_GPR_U32(ctx, 31, 0x203070u);
    ctx->pc = 0x20306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203068u;
    // 0x20306c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5CA0u, 0x203068u, 0x203070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203070u;
label_203070:
    // 0x203070: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x203070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_203074:
    // 0x203074: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x203074u;
    SET_GPR_U32(ctx, 31, 0x20307Cu);
    ctx->pc = 0x203078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203074u;
    // 0x203078: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x203074u, 0x20307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20307Cu;
label_20307c:
    // 0x20307c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20307Cu;
    {
        const bool branch_taken_0x20307c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20307Cu;
        // 0x203080: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20307c) {
            ctx->pc = 0x203050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203050;
        }
    }
    ctx->pc = 0x203084u;
    // 0x203084: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x203084u;
    {
        const bool branch_taken_0x203084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203084) {
            ctx->pc = 0x2032CCu;
            goto label_2032cc;
        }
    }
    ctx->pc = 0x20308Cu;
label_20308c:
    // 0x20308c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20308cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x203090: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x203090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x203094: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x203094u;
    SET_GPR_U32(ctx, 31, 0x20309Cu);
    ctx->pc = 0x203098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203094u;
    // 0x203098: 0x24a508d8  addiu       $a1, $a1, 0x8D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x203094u, 0x20309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20309Cu;
label_20309c:
    // 0x20309c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20309cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2030a0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2030A0u;
    {
        const bool branch_taken_0x2030a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030A0u;
        // 0x2030a4: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030a0) {
            ctx->pc = 0x2030E4u;
            goto label_2030e4;
        }
    }
    ctx->pc = 0x2030A8u;
    // 0x2030a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2030A8u;
    {
        const bool branch_taken_0x2030a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030A8u;
        // 0x2030ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030a8) {
            ctx->pc = 0x2030CCu;
            goto label_2030cc;
        }
    }
    ctx->pc = 0x2030B0u;
label_2030b0:
    // 0x2030b0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2030B0u;
    SET_GPR_U32(ctx, 31, 0x2030B8u);
    ctx->pc = 0x2030B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030B0u;
    // 0x2030b4: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2030B0u, 0x2030B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030B8u;
label_2030b8:
    // 0x2030b8: 0xc7ac0170  lwc1        $f12, 0x170($sp)
    ctx->pc = 0x2030b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2030bc: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x2030bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x2030c0: 0xc07e770  jal         func_1F9DC0
    ctx->pc = 0x2030C0u;
    SET_GPR_U32(ctx, 31, 0x2030C8u);
    ctx->pc = 0x2030C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030C0u;
    // 0x2030c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9DC0u, 0x2030C0u, 0x2030C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030C8u;
label_2030c8:
    // 0x2030c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2030c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2030cc:
    // 0x2030cc: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2030CCu;
    SET_GPR_U32(ctx, 31, 0x2030D4u);
    ctx->pc = 0x2030D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030CCu;
    // 0x2030d0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2030CCu, 0x2030D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030D4u;
label_2030d4:
    // 0x2030d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2030D4u;
    {
        const bool branch_taken_0x2030d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2030D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030D4u;
        // 0x2030d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030d4) {
            ctx->pc = 0x2030B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2030b0;
        }
    }
    ctx->pc = 0x2030DCu;
    // 0x2030dc: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2030DCu;
    {
        const bool branch_taken_0x2030dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2030dc) {
            ctx->pc = 0x2032CCu;
            goto label_2032cc;
        }
    }
    ctx->pc = 0x2030E4u;
label_2030e4:
    // 0x2030e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2030e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2030e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2030e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2030ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2030ECu;
    SET_GPR_U32(ctx, 31, 0x2030F4u);
    ctx->pc = 0x2030F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030ECu;
    // 0x2030f0: 0x24a508f0  addiu       $a1, $a1, 0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2030ECu, 0x2030F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030F4u;
label_2030f4:
    // 0x2030f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2030f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2030f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2030F8u;
    {
        const bool branch_taken_0x2030f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030F8u;
        // 0x2030fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030f8) {
            ctx->pc = 0x203140u;
            goto label_203140;
        }
    }
    ctx->pc = 0x203100u;
    // 0x203100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x203100u;
    {
        const bool branch_taken_0x203100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203100) {
            ctx->pc = 0x203128u;
            goto label_203128;
        }
    }
    ctx->pc = 0x203108u;
label_203108:
    // 0x203108: 0x27a50174  addiu       $a1, $sp, 0x174
    ctx->pc = 0x203108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x20310c: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x20310Cu;
    SET_GPR_U32(ctx, 31, 0x203114u);
    ctx->pc = 0x203110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20310Cu;
    // 0x203110: 0x27a60178  addiu       $a2, $sp, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x20310Cu, 0x203114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203114u;
label_203114:
    // 0x203114: 0xc7ac0174  lwc1        $f12, 0x174($sp)
    ctx->pc = 0x203114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x203118: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x203118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20311c: 0xc09d5a4  jal         func_275690
    ctx->pc = 0x20311Cu;
    SET_GPR_U32(ctx, 31, 0x203124u);
    ctx->pc = 0x203120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20311Cu;
    // 0x203120: 0xc7ad0178  lwc1        $f13, 0x178($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x275690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275690u, 0x20311Cu, 0x203124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203124u;
label_203124:
    // 0x203124: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x203124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_203128:
    // 0x203128: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x203128u;
    SET_GPR_U32(ctx, 31, 0x203130u);
    ctx->pc = 0x20312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203128u;
    // 0x20312c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x203128u, 0x203130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203130u;
label_203130:
    // 0x203130: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x203130u;
    {
        const bool branch_taken_0x203130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203130u;
        // 0x203134: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203130) {
            ctx->pc = 0x203108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203108;
        }
    }
    ctx->pc = 0x203138u;
    // 0x203138: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x203138u;
    {
        const bool branch_taken_0x203138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203138) {
            ctx->pc = 0x2032CCu;
            goto label_2032cc;
        }
    }
    ctx->pc = 0x203140u;
label_203140:
    // 0x203140: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x203140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x203144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x203144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x203148u;
    {
        const bool branch_taken_0x203148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203148u;
        // 0x20314c: 0x24519370  addiu       $s1, $v0, -0x6C90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203148) {
            ctx->pc = 0x203154u;
            goto label_203154;
        }
    }
    ctx->pc = 0x203150u;
label_203150:
    // 0x203150: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x203150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_203154:
    // 0x203154: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x203154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x203158: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203158u;
    {
        const bool branch_taken_0x203158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203158u;
        // 0x20315c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203158) {
            ctx->pc = 0x203174u;
            goto label_203174;
        }
    }
    ctx->pc = 0x203160u;
    // 0x203160: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x203160u;
    SET_GPR_U32(ctx, 31, 0x203168u);
    ctx->pc = 0x203164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203160u;
    // 0x203164: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x203160u, 0x203168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203168u;
label_203168:
    // 0x203168: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x203168u;
    {
        const bool branch_taken_0x203168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203168) {
            ctx->pc = 0x20316Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203168u;
            // 0x20316c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203150;
        }
    }
    ctx->pc = 0x203170u;
    // 0x203170: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x203170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203174:
    // 0x203174: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x203174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203178: 0x12420053  beq         $s2, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x203178u;
    {
        const bool branch_taken_0x203178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203178u;
        // 0x20317c: 0x8fa30188  lw          $v1, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203178) {
            ctx->pc = 0x2032C8u;
            goto label_2032c8;
        }
    }
    ctx->pc = 0x203180u;
    // 0x203180: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x203180u;
    {
        const bool branch_taken_0x203180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203180u;
        // 0x203184: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203180) {
            ctx->pc = 0x2031A4u;
            goto label_2031a4;
        }
    }
    ctx->pc = 0x203188u;
    // 0x203188: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203188u;
    {
        const bool branch_taken_0x203188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203188u;
        // 0x20318c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203188) {
            ctx->pc = 0x2031B0u;
            goto label_2031b0;
        }
    }
    ctx->pc = 0x203190u;
    // 0x203190: 0x24429398  addiu       $v0, $v0, -0x6C68
    ctx->pc = 0x203190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939544));
    // 0x203194: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x203194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x203198: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x203198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20319c: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x20319Cu;
    {
        const bool branch_taken_0x20319c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2031A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20319Cu;
        // 0x2031a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20319c) {
            ctx->pc = 0x2032CCu;
            goto label_2032cc;
        }
    }
    ctx->pc = 0x2031A4u;
label_2031a4:
    // 0x2031a4: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2031a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2031A8u;
    {
        const bool branch_taken_0x2031a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031A8u;
        // 0x2031ac: 0x8fa30188  lw          $v1, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031a8) {
            ctx->pc = 0x2031D0u;
            goto label_2031d0;
        }
    }
    ctx->pc = 0x2031B0u;
label_2031b0:
    // 0x2031b0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2031B0u;
    {
        const bool branch_taken_0x2031b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2031B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031B0u;
        // 0x2031b4: 0x8fa40184  lw          $a0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031b0) {
            ctx->pc = 0x2031D4u;
            goto label_2031d4;
        }
    }
    ctx->pc = 0x2031B8u;
    // 0x2031b8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2031bc: 0x24429398  addiu       $v0, $v0, -0x6C68
    ctx->pc = 0x2031bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939544));
    // 0x2031c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2031c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2031c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2031c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2031c8: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2031C8u;
    {
        const bool branch_taken_0x2031c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031C8u;
        // 0x2031cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031c8) {
            ctx->pc = 0x2032CCu;
            goto label_2032cc;
        }
    }
    ctx->pc = 0x2031D0u;
label_2031d0:
    // 0x2031d0: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_2031d4:
    // 0x2031d4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2031d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2031d8: 0x3c1e0046  lui         $fp, 0x46
    ctx->pc = 0x2031d8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)70 << 16));
    // 0x2031dc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2031e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2031e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031e4: 0x8c75045c  lw          $s5, 0x45C($v1)
    ctx->pc = 0x2031e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1116)));
    // 0x2031e8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2031E8u;
    {
        const bool branch_taken_0x2031e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031E8u;
        // 0x2031ec: 0x8c540480  lw          $s4, 0x480($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031e8) {
            ctx->pc = 0x2032B4u;
            goto label_2032b4;
        }
    }
    ctx->pc = 0x2031F0u;
label_2031f0:
    // 0x2031f0: 0x1a800026  blez        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x2031F0u;
    {
        const bool branch_taken_0x2031f0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2031F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031F0u;
        // 0x2031f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031f0) {
            ctx->pc = 0x20328Cu;
            goto label_20328c;
        }
    }
    ctx->pc = 0x2031F8u;
    // 0x2031f8: 0x26b00004  addiu       $s0, $s5, 0x4
    ctx->pc = 0x2031f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2031fc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2031fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_203200:
    // 0x203200: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203204: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x203204u;
    SET_GPR_U32(ctx, 31, 0x20320Cu);
    ctx->pc = 0x203208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203204u;
    // 0x203208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x203204u, 0x20320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20320Cu;
label_20320c:
    // 0x20320c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x20320Cu;
    {
        const bool branch_taken_0x20320c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20320c) {
            ctx->pc = 0x203210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20320Cu;
            // 0x203210: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20327Cu;
            goto label_20327c;
        }
    }
    ctx->pc = 0x203214u;
    // 0x203214: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x203214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203218: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x203218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x20321c: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x20321Cu;
    SET_GPR_U32(ctx, 31, 0x203224u);
    ctx->pc = 0x203220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20321Cu;
    // 0x203220: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x20321Cu, 0x203224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203224u;
label_203224:
    // 0x203224: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x203228: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20322c: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x20322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x203230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203234: 0x0  nop
    ctx->pc = 0x203234u;
    // NOP
    // 0x203238: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x203238u;
    {
        const bool branch_taken_0x203238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203238) {
            ctx->pc = 0x20323Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203238u;
            // 0x20323c: 0xe7a1017c  swc1        $f1, 0x17C($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x203240u;
            goto label_203240;
        }
    }
    ctx->pc = 0x203240u;
label_203240:
    // 0x203240: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x203240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x203244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x203248: 0x0  nop
    ctx->pc = 0x203248u;
    // NOP
    // 0x20324c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20324Cu;
    {
        const bool branch_taken_0x20324c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20324c) {
            ctx->pc = 0x203250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20324Cu;
            // 0x203250: 0xe7a10180  swc1        $f1, 0x180($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x203254u;
            goto label_203254;
        }
    }
    ctx->pc = 0x203254u;
label_203254:
    // 0x203254: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x203254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203258: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x203258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20325c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20325cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x203260: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x203260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x203264: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x203264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x203268: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x203268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20326c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20326cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x203270: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x203270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x203274: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x203274u;
    {
        const bool branch_taken_0x203274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203274u;
        // 0x203278: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203274) {
            ctx->pc = 0x20328Cu;
            goto label_20328c;
        }
    }
    ctx->pc = 0x20327Cu;
label_20327c:
    // 0x20327c: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x20327cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x203280: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x203280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x203284: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x203284u;
    {
        const bool branch_taken_0x203284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203284u;
        // 0x203288: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203284) {
            ctx->pc = 0x203200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203200;
        }
    }
    ctx->pc = 0x20328Cu;
label_20328c:
    // 0x20328c: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x20328Cu;
    {
        const bool branch_taken_0x20328c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x203290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20328Cu;
        // 0x203290: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20328c) {
            ctx->pc = 0x2032B8u;
            goto label_2032b8;
        }
    }
    ctx->pc = 0x203294u;
    // 0x203294: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x203294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x203298: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203298u;
    {
        const bool branch_taken_0x203298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203298u;
        // 0x20329c: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203298) {
            ctx->pc = 0x2032B8u;
            goto label_2032b8;
        }
    }
    ctx->pc = 0x2032A0u;
    // 0x2032a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2032a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2032a4: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2032a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2032a8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2032ac: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x2032ACu;
    SET_GPR_U32(ctx, 31, 0x2032B4u);
    ctx->pc = 0x2032B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032ACu;
    // 0x2032b0: 0x27c60900  addiu       $a2, $fp, 0x900 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 2304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2032ACu, 0x2032B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032B4u;
label_2032b4:
    // 0x2032b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2032b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2032b8:
    // 0x2032b8: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x2032B8u;
    SET_GPR_U32(ctx, 31, 0x2032C0u);
    ctx->pc = 0x2032BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032B8u;
    // 0x2032bc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x2032B8u, 0x2032C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032C0u;
label_2032c0:
    // 0x2032c0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2032C0u;
    {
        const bool branch_taken_0x2032c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2032C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032C0u;
        // 0x2032c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032c0) {
            ctx->pc = 0x2031F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2031f0;
        }
    }
    ctx->pc = 0x2032C8u;
label_2032c8:
    // 0x2032c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2032c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2032cc:
    // 0x2032cc: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x2032CCu;
    SET_GPR_U32(ctx, 31, 0x2032D4u);
    ctx->pc = 0x2032D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032CCu;
    // 0x2032d0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x2032CCu, 0x2032D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032D4u;
label_2032d4:
    // 0x2032d4: 0x1440fe84  bnez        $v0, . + 4 + (-0x17C << 2)
    ctx->pc = 0x2032D4u;
    {
        const bool branch_taken_0x2032d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2032D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2032D4u;
        // 0x2032d8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032d4) {
            ctx->pc = 0x202CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202ce8;
        }
    }
    ctx->pc = 0x2032DCu;
    // 0x2032dc: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x2032DCu;
    SET_GPR_U32(ctx, 31, 0x2032E4u);
    ctx->pc = 0x2032E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032DCu;
    // 0x2032e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x2032DCu, 0x2032E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032E4u;
label_2032e4:
    // 0x2032e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2032e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2032E8u;
    SET_GPR_U32(ctx, 31, 0x2032F0u);
    ctx->pc = 0x2032ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032E8u;
    // 0x2032ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2032E8u, 0x2032F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032F0u;
label_2032f0:
    // 0x2032f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2032f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2032f4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2032F4u;
    SET_GPR_U32(ctx, 31, 0x2032FCu);
    ctx->pc = 0x2032F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2032F4u;
    // 0x2032f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2032F4u, 0x2032FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032FCu;
label_2032fc:
    // 0x2032fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2032fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203300: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x203300u;
    SET_GPR_U32(ctx, 31, 0x203308u);
    ctx->pc = 0x203304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203300u;
    // 0x203304: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x203300u, 0x203308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203308u;
label_203308:
    // 0x203308: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x203308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x20330c: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x20330cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x203310: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x203310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x203314: 0xdfb301a8  ld          $s3, 0x1A8($sp)
    ctx->pc = 0x203314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x203318: 0xdfb401b0  ld          $s4, 0x1B0($sp)
    ctx->pc = 0x203318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x20331c: 0xdfb501b8  ld          $s5, 0x1B8($sp)
    ctx->pc = 0x20331cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x203320: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x203320u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x203324: 0xdfb701c8  ld          $s7, 0x1C8($sp)
    ctx->pc = 0x203324u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x203328: 0xdfbe01d0  ld          $fp, 0x1D0($sp)
    ctx->pc = 0x203328u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x20332c: 0xdfbf01d8  ld          $ra, 0x1D8($sp)
    ctx->pc = 0x20332cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x203330: 0xc7b401e0  lwc1        $f20, 0x1E0($sp)
    ctx->pc = 0x203330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x203334: 0x3e00008  jr          $ra
    ctx->pc = 0x203334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203334u;
        // 0x203338: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20333Cu;
    // 0x20333c: 0x0  nop
    ctx->pc = 0x20333cu;
    // NOP
    ctx->pc = 0x203340u;
}
