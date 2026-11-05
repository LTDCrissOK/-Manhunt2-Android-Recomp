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

// Function: sub_00156C78
// Address: 0x156c78 - 0x156e20
void sub_00156C78_0x156c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156C78_0x156c78");
#endif

    switch (ctx->pc) {
        case 0x156ca4u: goto label_156ca4;
        case 0x156cb0u: goto label_156cb0;
        case 0x156cc0u: goto label_156cc0;
        case 0x156cf4u: goto label_156cf4;
        case 0x156d18u: goto label_156d18;
        case 0x156d2cu: goto label_156d2c;
        case 0x156d38u: goto label_156d38;
        case 0x156d68u: goto label_156d68;
        case 0x156d78u: goto label_156d78;
        case 0x156db8u: goto label_156db8;
        case 0x156dc4u: goto label_156dc4;
        case 0x156dd4u: goto label_156dd4;
        case 0x156de0u: goto label_156de0;
        case 0x156df4u: goto label_156df4;
        case 0x156e00u: goto label_156e00;
        default: break;
    }

    ctx->pc = 0x156c78u;

    // 0x156c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156c7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156c80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x156c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x156c84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x156c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x156c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x156c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x156c90: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x156c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x156c94: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x156c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x156c98: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x156c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x156c9c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156C9Cu;
    SET_GPR_U32(ctx, 31, 0x156CA4u);
    ctx->pc = 0x156CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C9Cu;
    // 0x156ca0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156C9Cu, 0x156CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CA4u;
label_156ca4:
    // 0x156ca4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156ca4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156ca8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x156CA8u;
    SET_GPR_U32(ctx, 31, 0x156CB0u);
    ctx->pc = 0x156CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CA8u;
    // 0x156cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x156CA8u, 0x156CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CB0u;
label_156cb0:
    // 0x156cb0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156cb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156cb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x156cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x156cb8: 0xc055950  jal         func_156540
    ctx->pc = 0x156CB8u;
    SET_GPR_U32(ctx, 31, 0x156CC0u);
    ctx->pc = 0x156CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CB8u;
    // 0x156cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x156CB8u, 0x156CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CC0u;
label_156cc0:
    // 0x156cc0: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x156cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156cc4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x156cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x156cc8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x156cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x156ccc: 0x24539a08  addiu       $s3, $v0, -0x65F8
    ctx->pc = 0x156cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x156cd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156cd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x156cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x156cdc: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x156cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156ce0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x156ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x156ce4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x156ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x156ce8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x156cec: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x156CECu;
    SET_GPR_U32(ctx, 31, 0x156CF4u);
    ctx->pc = 0x156CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156CECu;
    // 0x156cf0: 0x8c52020c  lw          $s2, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x156CECu, 0x156CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156CF4u;
label_156cf4:
    // 0x156cf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x156cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156cfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x156cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d00: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x156d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x156d04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x156d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156d08: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x156d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156d0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x156d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d10: 0xc04daca  jal         func_136B28
    ctx->pc = 0x156D10u;
    SET_GPR_U32(ctx, 31, 0x156D18u);
    ctx->pc = 0x156D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D10u;
    // 0x156d14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x156D10u, 0x156D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D18u;
label_156d18:
    // 0x156d18: 0x8e050544  lw          $a1, 0x544($s0)
    ctx->pc = 0x156d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
    // 0x156d1c: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x156D1Cu;
    {
        const bool branch_taken_0x156d1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x156d1c) {
            ctx->pc = 0x156D70u;
            goto label_156d70;
        }
    }
    ctx->pc = 0x156D24u;
    // 0x156d24: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x156D24u;
    SET_GPR_U32(ctx, 31, 0x156D2Cu);
    ctx->pc = 0x156D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D24u;
    // 0x156d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x156D24u, 0x156D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D2Cu;
label_156d2c:
    // 0x156d2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x156d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d30: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x156D30u;
    SET_GPR_U32(ctx, 31, 0x156D38u);
    ctx->pc = 0x156D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D30u;
    // 0x156d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x156D30u, 0x156D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D38u;
label_156d38:
    // 0x156d38: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x156d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x156d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156d40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x156d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x156d44: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x156d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x156d48: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156D48u;
    {
        const bool branch_taken_0x156d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156d48) {
            ctx->pc = 0x156D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156D48u;
            // 0x156d4c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x156D50u;
    // 0x156d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156D50u;
    {
        const bool branch_taken_0x156d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D50u;
        // 0x156d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d50) {
            ctx->pc = 0x156D60u;
            goto label_156d60;
        }
    }
    ctx->pc = 0x156D58u;
label_156d58:
    // 0x156d58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x156d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156d5c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x156d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_156d60:
    // 0x156d60: 0xc046058  jal         func_118160
    ctx->pc = 0x156D60u;
    SET_GPR_U32(ctx, 31, 0x156D68u);
    ctx->pc = 0x156D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D60u;
    // 0x156d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x156D60u, 0x156D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D68u;
label_156d68:
    // 0x156d68: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x156D68u;
    {
        const bool branch_taken_0x156d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D68u;
        // 0x156d6c: 0x26050530  addiu       $a1, $s0, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d68) {
            ctx->pc = 0x156DBCu;
            goto label_156dbc;
        }
    }
    ctx->pc = 0x156D70u;
label_156d70:
    // 0x156d70: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x156D70u;
    SET_GPR_U32(ctx, 31, 0x156D78u);
    ctx->pc = 0x156D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156D70u;
    // 0x156d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x156D70u, 0x156D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156D78u;
label_156d78:
    // 0x156d78: 0x8e030544  lw          $v1, 0x544($s0)
    ctx->pc = 0x156d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
    // 0x156d7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x156d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x156d80: 0xc442c6a4  lwc1        $f2, -0x395C($v0)
    ctx->pc = 0x156d80u;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d88: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156d8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x156d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x156d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x156d94: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x156d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156d98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x156d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x156d9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x156d9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x156da0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x156da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156da4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x156da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x156da8: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x156da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156dac: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x156dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x156db0: 0xc046058  jal         func_118160
    ctx->pc = 0x156DB0u;
    SET_GPR_U32(ctx, 31, 0x156DB8u);
    ctx->pc = 0x156DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DB0u;
    // 0x156db4: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x156DB0u, 0x156DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DB8u;
label_156db8:
    // 0x156db8: 0x26050530  addiu       $a1, $s0, 0x530
    ctx->pc = 0x156db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_156dbc:
    // 0x156dbc: 0xc04609e  jal         func_118278
    ctx->pc = 0x156DBCu;
    SET_GPR_U32(ctx, 31, 0x156DC4u);
    ctx->pc = 0x156DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DBCu;
    // 0x156dc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118278u, 0x156DBCu, 0x156DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DC4u;
label_156dc4:
    // 0x156dc4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x156dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x156dc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x156dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x156dcc: 0xc046290  jal         func_118A40
    ctx->pc = 0x156DCCu;
    SET_GPR_U32(ctx, 31, 0x156DD4u);
    ctx->pc = 0x156DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DCCu;
    // 0x156dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x156DCCu, 0x156DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DD4u;
label_156dd4:
    // 0x156dd4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156dd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156dd8: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x156DD8u;
    SET_GPR_U32(ctx, 31, 0x156DE0u);
    ctx->pc = 0x156DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DD8u;
    // 0x156ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x156DD8u, 0x156DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DE0u;
label_156de0:
    // 0x156de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156de4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x156de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156de8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x156de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156dec: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x156DECu;
    SET_GPR_U32(ctx, 31, 0x156DF4u);
    ctx->pc = 0x156DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DECu;
    // 0x156df0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x156DECu, 0x156DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156DF4u;
label_156df4:
    // 0x156df4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156df8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x156DF8u;
    SET_GPR_U32(ctx, 31, 0x156E00u);
    ctx->pc = 0x156DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156DF8u;
    // 0x156dfc: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x156DF8u, 0x156E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E00u;
label_156e00:
    // 0x156e00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x156e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156e04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x156e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156e08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x156e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156e0c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x156e0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x156e10: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x156e10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156e14: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x156e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x156e18: 0x3e00008  jr          $ra
    ctx->pc = 0x156E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E18u;
        // 0x156e1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156E20u;
}
