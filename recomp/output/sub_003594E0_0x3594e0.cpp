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

// Function: sub_003594E0
// Address: 0x3594e0 - 0x3596e0
void sub_003594E0_0x3594e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003594E0_0x3594e0");
#endif

    switch (ctx->pc) {
        case 0x359524u: goto label_359524;
        case 0x359538u: goto label_359538;
        case 0x359568u: goto label_359568;
        case 0x359590u: goto label_359590;
        case 0x3595e0u: goto label_3595e0;
        case 0x359660u: goto label_359660;
        case 0x35968cu: goto label_35968c;
        case 0x3596a4u: goto label_3596a4;
        case 0x3596b4u: goto label_3596b4;
        default: break;
    }

    ctx->pc = 0x3594e0u;

    // 0x3594e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3594e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3594e4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3594e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3594e8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3594e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3594ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3594ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594f0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3594f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3594f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3594f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3594f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3594fc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3594fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x359500: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x359500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x359504: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x359504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x359508: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x359508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x35950c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x35950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x359510: 0x8e850054  lw          $a1, 0x54($s4)
    ctx->pc = 0x359510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x359514: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x359514u;
    {
        const bool branch_taken_0x359514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x359518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359514u;
        // 0x359518: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359514) {
            ctx->pc = 0x359524u;
            goto label_359524;
        }
    }
    ctx->pc = 0x35951Cu;
    // 0x35951c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x35951Cu;
    SET_GPR_U32(ctx, 31, 0x359524u);
    ctx->pc = 0x359520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35951Cu;
    // 0x359520: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x35951Cu, 0x359524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359524u;
label_359524:
    // 0x359524: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x359524u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x359528: 0x26950058  addiu       $s5, $s4, 0x58
    ctx->pc = 0x359528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
    // 0x35952c: 0x2610d4c0  addiu       $s0, $s0, -0x2B40
    ctx->pc = 0x35952cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956224));
    // 0x359530: 0xc0d640c  jal         func_359030
    ctx->pc = 0x359530u;
    SET_GPR_U32(ctx, 31, 0x359538u);
    ctx->pc = 0x359534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359530u;
    // 0x359534: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359030u, 0x359530u, 0x359538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359538u;
label_359538:
    // 0x359538: 0x32370001  andi        $s7, $s1, 0x1
    ctx->pc = 0x359538u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x35953c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x35953Cu;
    {
        const bool branch_taken_0x35953c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35953c) {
            ctx->pc = 0x359540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35953Cu;
            // 0x359540: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359544u;
            goto label_359544;
        }
    }
    ctx->pc = 0x359544u;
label_359544:
    // 0x359544: 0x26960068  addiu       $s6, $s4, 0x68
    ctx->pc = 0x359544u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x359548: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x359548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x35954c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35954cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x359550: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x359550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x359554: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x359554u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x359558: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x359558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35955c: 0x1093004e  beq         $a0, $s3, . + 4 + (0x4E << 2)
    ctx->pc = 0x35955Cu;
    {
        const bool branch_taken_0x35955c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x359560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35955Cu;
        // 0x359560: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35955c) {
            ctx->pc = 0x359698u;
            goto label_359698;
        }
    }
    ctx->pc = 0x359564u;
    // 0x359564: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x359564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_359568:
    // 0x359568: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x359568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35956c: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x35956Cu;
    {
        const bool branch_taken_0x35956c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x359570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35956Cu;
        // 0x359570: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35956c) {
            ctx->pc = 0x35968Cu;
            goto label_35968c;
        }
    }
    ctx->pc = 0x359574u;
    // 0x359574: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x359574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x359578: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x359578u;
    {
        const bool branch_taken_0x359578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x35957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359578u;
        // 0x35957c: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359578) {
            ctx->pc = 0x3595B0u;
            goto label_3595b0;
        }
    }
    ctx->pc = 0x359580u;
    // 0x359580: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x359580u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x359584: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x359584u;
    {
        const bool branch_taken_0x359584 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x359588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359584u;
        // 0x359588: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359584) {
            ctx->pc = 0x3595B0u;
            goto label_3595b0;
        }
    }
    ctx->pc = 0x35958Cu;
    // 0x35958c: 0x0  nop
    ctx->pc = 0x35958cu;
    // NOP
label_359590:
    // 0x359590: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x359590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x359594: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x359594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x359598: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x359598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35959c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3595a0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x3595a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3595a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3595a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3595a8: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3595A8u;
    {
        const bool branch_taken_0x3595a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3595ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595A8u;
        // 0x3595ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595a8) {
            ctx->pc = 0x359590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359590;
        }
    }
    ctx->pc = 0x3595B0u;
label_3595b0:
    // 0x3595b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3595b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3595b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3595b8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3595b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x3595bc: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3595BCu;
    {
        const bool branch_taken_0x3595bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3595C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595BCu;
        // 0x3595c0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595bc) {
            ctx->pc = 0x35968Cu;
            goto label_35968c;
        }
    }
    ctx->pc = 0x3595C4u;
    // 0x3595c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3595c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3595c8: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x3595c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3595cc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3595ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3595d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3595d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3595d4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3595D4u;
    {
        const bool branch_taken_0x3595d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3595D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595D4u;
        // 0x3595d8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595d4) {
            ctx->pc = 0x3595F8u;
            goto label_3595f8;
        }
    }
    ctx->pc = 0x3595DCu;
    // 0x3595dc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3595dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3595e0:
    // 0x3595e0: 0x0  nop
    ctx->pc = 0x3595e0u;
    // NOP
    // 0x3595e4: 0x0  nop
    ctx->pc = 0x3595e4u;
    // NOP
    // 0x3595e8: 0x0  nop
    ctx->pc = 0x3595e8u;
    // NOP
    // 0x3595ec: 0x0  nop
    ctx->pc = 0x3595ecu;
    // NOP
    // 0x3595f0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3595F0u;
    {
        const bool branch_taken_0x3595f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3595F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3595F0u;
        // 0x3595f4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595f0) {
            ctx->pc = 0x3595E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3595e0;
        }
    }
    ctx->pc = 0x3595F8u;
label_3595f8:
    // 0x3595f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3595f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3595fc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3595fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x359600: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x359600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x359604: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x359604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359608: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x359608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35960c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x35960cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x359610: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x359610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x359614: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x359614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x359618: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x359618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x35961c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x35961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x359620: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x359620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x359624: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x359624u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x359628: 0x6a42000f  ldl         $v0, 0xF($s2)
    ctx->pc = 0x359628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35962c: 0x6e420008  ldr         $v0, 0x8($s2)
    ctx->pc = 0x35962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x359630: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x359630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x359634: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x359634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x359638: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x359638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x35963c: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x35963cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x359640: 0xb246000f  sdl         $a2, 0xF($s2)
    ctx->pc = 0x359640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x359644: 0xb6460008  sdr         $a2, 0x8($s2)
    ctx->pc = 0x359644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x359648: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x359648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35964c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359650: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x359650u;
    {
        const bool branch_taken_0x359650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x359654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359650u;
        // 0x359654: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359650) {
            ctx->pc = 0x359678u;
            goto label_359678;
        }
    }
    ctx->pc = 0x359658u;
    // 0x359658: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x359658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x35965c: 0x0  nop
    ctx->pc = 0x35965cu;
    // NOP
label_359660:
    // 0x359660: 0x0  nop
    ctx->pc = 0x359660u;
    // NOP
    // 0x359664: 0x0  nop
    ctx->pc = 0x359664u;
    // NOP
    // 0x359668: 0x0  nop
    ctx->pc = 0x359668u;
    // NOP
    // 0x35966c: 0x0  nop
    ctx->pc = 0x35966cu;
    // NOP
    // 0x359670: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x359670u;
    {
        const bool branch_taken_0x359670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x359670) {
            ctx->pc = 0x359674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359670u;
            // 0x359674: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359660;
        }
    }
    ctx->pc = 0x359678u;
label_359678:
    // 0x359678: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x359678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35967c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35967Cu;
    {
        const bool branch_taken_0x35967c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35967c) {
            ctx->pc = 0x359680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35967Cu;
            // 0x359680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359690u;
            goto label_359690;
        }
    }
    ctx->pc = 0x359684u;
    // 0x359684: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x359684u;
    SET_GPR_U32(ctx, 31, 0x35968Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x359684u, 0x35968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35968Cu;
label_35968c:
    // 0x35968c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_359690:
    // 0x359690: 0x5493ffb5  bnel        $a0, $s3, . + 4 + (-0x4B << 2)
    ctx->pc = 0x359690u;
    {
        const bool branch_taken_0x359690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x359690) {
            ctx->pc = 0x359694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359690u;
            // 0x359694: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359568;
        }
    }
    ctx->pc = 0x359698u;
label_359698:
    // 0x359698: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x359698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35969c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35969Cu;
    SET_GPR_U32(ctx, 31, 0x3596A4u);
    ctx->pc = 0x3596A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35969Cu;
    // 0x3596a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35969Cu, 0x3596A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596A4u;
label_3596a4:
    // 0x3596a4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x3596A4u;
    {
        const bool branch_taken_0x3596a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596A4u;
        // 0x3596a8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596a4) {
            ctx->pc = 0x3596B8u;
            goto label_3596b8;
        }
    }
    ctx->pc = 0x3596ACu;
    // 0x3596ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3596ACu;
    SET_GPR_U32(ctx, 31, 0x3596B4u);
    ctx->pc = 0x3596B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3596ACu;
    // 0x3596b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3596ACu, 0x3596B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3596B4u;
label_3596b4:
    // 0x3596b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3596b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3596b8:
    // 0x3596b8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3596b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3596bc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3596bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3596c0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3596c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3596c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3596c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3596c8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x3596c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3596cc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3596ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3596d0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x3596d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3596d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3596d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3596d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3596D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3596DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3596D8u;
        // 0x3596dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3596D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3596E0u;
}
