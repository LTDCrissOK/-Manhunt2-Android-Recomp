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

// Function: sub_003C81A0
// Address: 0x3c81a0 - 0x3c8320
void sub_003C81A0_0x3c81a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C81A0_0x3c81a0");
#endif

    switch (ctx->pc) {
        case 0x3c81d4u: goto label_3c81d4;
        case 0x3c823cu: goto label_3c823c;
        case 0x3c82a0u: goto label_3c82a0;
        case 0x3c82e8u: goto label_3c82e8;
        default: break;
    }

    ctx->pc = 0x3c81a0u;

    // 0x3c81a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c81a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c81a4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c81a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3c81a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c81a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c81ac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3c81acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3c81b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3c81b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3c81b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c81b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c81b8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c81b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3c81bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3c81bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c81c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c81c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3c81c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c81c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c81c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c81c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c81cc: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C81CCu;
    SET_GPR_U32(ctx, 31, 0x3C81D4u);
    ctx->pc = 0x3C81D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C81CCu;
    // 0x3c81d0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C81CCu, 0x3C81D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C81D4u;
label_3c81d4:
    // 0x3c81d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c81d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c81d8: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x3c81d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3c81dc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3c81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3c81e0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3c81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3c81e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c81e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c81e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c81e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c81ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3c81ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3c81f0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3c81f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3c81f4: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x3c81f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x3c81f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c81f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c81fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c81fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c8200: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3c8200u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3c8204: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3c8204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3c8208: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x3c8208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3c820c: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x3c820cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x3c8210: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8210u;
    {
        const bool branch_taken_0x3c8210 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8210u;
        // 0x3c8214: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8210) {
            ctx->pc = 0x3C8224u;
            goto label_3c8224;
        }
    }
    ctx->pc = 0x3C8218u;
    // 0x3c8218: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3c8218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3c821c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3c821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3c8220: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3c8220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3c8224:
    // 0x3c8224: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3c8224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3c8228: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c8228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c822c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C822Cu;
    {
        const bool branch_taken_0x3c822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C822Cu;
        // 0x3c8230: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c822c) {
            ctx->pc = 0x3C8294u;
            goto label_3c8294;
        }
    }
    ctx->pc = 0x3C8234u;
    // 0x3c8234: 0xc0f1dfc  jal         func_3C77F0
    ctx->pc = 0x3C8234u;
    SET_GPR_U32(ctx, 31, 0x3C823Cu);
    ctx->pc = 0x3C8238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8234u;
    // 0x3c8238: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C77F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C77F0u, 0x3C8234u, 0x3C823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C823Cu;
label_3c823c:
    // 0x3c823c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c823cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8240: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C8240u;
    {
        const bool branch_taken_0x3c8240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8240u;
        // 0x3c8244: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8240) {
            ctx->pc = 0x3C826Cu;
            goto label_3c826c;
        }
    }
    ctx->pc = 0x3C8248u;
    // 0x3c8248: 0x52023  negu        $a0, $a1
    ctx->pc = 0x3c8248u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3c824c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8250: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x3c8250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3c8254: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c8254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c8258: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3c8258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x3c825c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3c825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c8260: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x3c8260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3c8264: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8264u;
    {
        const bool branch_taken_0x3c8264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8264u;
        // 0x3c8268: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8264) {
            ctx->pc = 0x3C8274u;
            goto label_3c8274;
        }
    }
    ctx->pc = 0x3C826Cu;
label_3c826c:
    // 0x3c826c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8270: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3c8270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3c8274:
    // 0x3c8274: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3c8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c8278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c827c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c827cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c8280: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x3c8280u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x3c8284: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3c8284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x3c8288: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3c8288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c828c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C828Cu;
    {
        const bool branch_taken_0x3c828c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C828Cu;
        // 0x3c8290: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c828c) {
            ctx->pc = 0x3C82B4u;
            goto label_3c82b4;
        }
    }
    ctx->pc = 0x3C8294u;
label_3c8294:
    // 0x3c8294: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x3c8294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3c8298: 0xc0f1dfc  jal         func_3C77F0
    ctx->pc = 0x3C8298u;
    SET_GPR_U32(ctx, 31, 0x3C82A0u);
    ctx->pc = 0x3C829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8298u;
    // 0x3c829c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C77F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C77F0u, 0x3C8298u, 0x3C82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C82A0u;
label_3c82a0:
    // 0x3c82a0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3c82a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c82a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c82a8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3c82a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3c82ac: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x3c82acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3c82b0: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x3c82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_3c82b4:
    // 0x3c82b4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C82B4u;
    {
        const bool branch_taken_0x3c82b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82B4u;
        // 0x3c82b8: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c82b4) {
            ctx->pc = 0x3C82D0u;
            goto label_3c82d0;
        }
    }
    ctx->pc = 0x3C82BCu;
    // 0x3c82bc: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x3c82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3c82c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3c82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c82c4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3c82c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3c82c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C82C8u;
    {
        const bool branch_taken_0x3c82c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C82C8u;
        // 0x3c82cc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c82c8) {
            ctx->pc = 0x3C82F0u;
            goto label_3c82f0;
        }
    }
    ctx->pc = 0x3C82D0u;
label_3c82d0:
    // 0x3c82d0: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x3c82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x3c82d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3c82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3c82d8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3c82d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3c82dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3c82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3c82e0: 0xc0f1dda  jal         func_3C7768
    ctx->pc = 0x3C82E0u;
    SET_GPR_U32(ctx, 31, 0x3C82E8u);
    ctx->pc = 0x3C82E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C82E0u;
    // 0x3c82e4: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7768u, 0x3C82E0u, 0x3C82E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C82E8u;
label_3c82e8:
    // 0x3c82e8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x3c82e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x3c82ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3c82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c82f0:
    // 0x3c82f0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3c82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x3c82f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c82f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c82f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c82f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c82fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c82fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c8300: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c8300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c8304: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c8304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c8308: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3c8308u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c830c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3c830cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c8310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c8310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8314: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8314u;
        // 0x3c8318: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C831Cu;
    // 0x3c831c: 0x0  nop
    ctx->pc = 0x3c831cu;
    // NOP
    ctx->pc = 0x3c8320u;
}
