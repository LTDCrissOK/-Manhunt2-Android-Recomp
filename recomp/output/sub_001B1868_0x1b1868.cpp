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

// Function: sub_001B1868
// Address: 0x1b1868 - 0x1b19c0
void sub_001B1868_0x1b1868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1868_0x1b1868");
#endif

    switch (ctx->pc) {
        case 0x1b1868u: goto label_1b1868;
        case 0x1b186cu: goto label_1b186c;
        case 0x1b1870u: goto label_1b1870;
        case 0x1b1874u: goto label_1b1874;
        case 0x1b1878u: goto label_1b1878;
        case 0x1b187cu: goto label_1b187c;
        case 0x1b1880u: goto label_1b1880;
        case 0x1b1884u: goto label_1b1884;
        case 0x1b1888u: goto label_1b1888;
        case 0x1b188cu: goto label_1b188c;
        case 0x1b1890u: goto label_1b1890;
        case 0x1b1894u: goto label_1b1894;
        case 0x1b1898u: goto label_1b1898;
        case 0x1b189cu: goto label_1b189c;
        case 0x1b18a0u: goto label_1b18a0;
        case 0x1b18a4u: goto label_1b18a4;
        case 0x1b18a8u: goto label_1b18a8;
        case 0x1b18acu: goto label_1b18ac;
        case 0x1b18b0u: goto label_1b18b0;
        case 0x1b18b4u: goto label_1b18b4;
        case 0x1b18b8u: goto label_1b18b8;
        case 0x1b18bcu: goto label_1b18bc;
        case 0x1b18c0u: goto label_1b18c0;
        case 0x1b18c4u: goto label_1b18c4;
        case 0x1b18c8u: goto label_1b18c8;
        case 0x1b18ccu: goto label_1b18cc;
        case 0x1b18d0u: goto label_1b18d0;
        case 0x1b18d4u: goto label_1b18d4;
        case 0x1b18d8u: goto label_1b18d8;
        case 0x1b18dcu: goto label_1b18dc;
        case 0x1b18e0u: goto label_1b18e0;
        case 0x1b18e4u: goto label_1b18e4;
        case 0x1b18e8u: goto label_1b18e8;
        case 0x1b18ecu: goto label_1b18ec;
        case 0x1b18f0u: goto label_1b18f0;
        case 0x1b18f4u: goto label_1b18f4;
        case 0x1b18f8u: goto label_1b18f8;
        case 0x1b18fcu: goto label_1b18fc;
        case 0x1b1900u: goto label_1b1900;
        case 0x1b1904u: goto label_1b1904;
        case 0x1b1908u: goto label_1b1908;
        case 0x1b190cu: goto label_1b190c;
        case 0x1b1910u: goto label_1b1910;
        case 0x1b1914u: goto label_1b1914;
        case 0x1b1918u: goto label_1b1918;
        case 0x1b191cu: goto label_1b191c;
        case 0x1b1920u: goto label_1b1920;
        case 0x1b1924u: goto label_1b1924;
        case 0x1b1928u: goto label_1b1928;
        case 0x1b192cu: goto label_1b192c;
        case 0x1b1930u: goto label_1b1930;
        case 0x1b1934u: goto label_1b1934;
        case 0x1b1938u: goto label_1b1938;
        case 0x1b193cu: goto label_1b193c;
        case 0x1b1940u: goto label_1b1940;
        case 0x1b1944u: goto label_1b1944;
        case 0x1b1948u: goto label_1b1948;
        case 0x1b194cu: goto label_1b194c;
        case 0x1b1950u: goto label_1b1950;
        case 0x1b1954u: goto label_1b1954;
        case 0x1b1958u: goto label_1b1958;
        case 0x1b195cu: goto label_1b195c;
        case 0x1b1960u: goto label_1b1960;
        case 0x1b1964u: goto label_1b1964;
        case 0x1b1968u: goto label_1b1968;
        case 0x1b196cu: goto label_1b196c;
        case 0x1b1970u: goto label_1b1970;
        case 0x1b1974u: goto label_1b1974;
        case 0x1b1978u: goto label_1b1978;
        case 0x1b197cu: goto label_1b197c;
        case 0x1b1980u: goto label_1b1980;
        case 0x1b1984u: goto label_1b1984;
        case 0x1b1988u: goto label_1b1988;
        case 0x1b198cu: goto label_1b198c;
        case 0x1b1990u: goto label_1b1990;
        case 0x1b1994u: goto label_1b1994;
        case 0x1b1998u: goto label_1b1998;
        case 0x1b199cu: goto label_1b199c;
        case 0x1b19a0u: goto label_1b19a0;
        case 0x1b19a4u: goto label_1b19a4;
        case 0x1b19a8u: goto label_1b19a8;
        case 0x1b19acu: goto label_1b19ac;
        case 0x1b19b0u: goto label_1b19b0;
        case 0x1b19b4u: goto label_1b19b4;
        case 0x1b19b8u: goto label_1b19b8;
        case 0x1b19bcu: goto label_1b19bc;
        default: break;
    }

    ctx->pc = 0x1b1868u;

label_1b1868:
    // 0x1b1868: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b1868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1b186c:
    // 0x1b186c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b186cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b1870:
    // 0x1b1870: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1b1870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_1b1874:
    // 0x1b1874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b1878:
    // 0x1b1878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b187c:
    // 0x1b187c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b187cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1880:
    // 0x1b1880: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b1880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b1884:
    // 0x1b1884: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_1b1888:
    if (ctx->pc == 0x1B1888u) {
        ctx->pc = 0x1B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1884u;
        // 0x1b1888: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B188Cu;
        goto label_1b188c;
    }
    ctx->pc = 0x1B1884u;
    {
        const bool branch_taken_0x1b1884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1884u;
        // 0x1b1888: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1884) {
            ctx->pc = 0x1B19ACu;
            goto label_1b19ac;
        }
    }
    ctx->pc = 0x1B188Cu;
label_1b188c:
    // 0x1b188c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b188cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1b1890:
    // 0x1b1890: 0x8c438958  lw          $v1, -0x76A8($v0)
    ctx->pc = 0x1b1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936920)));
label_1b1894:
    // 0x1b1894: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b1898:
    // 0x1b1898: 0xac438958  sw          $v1, -0x76A8($v0)
    ctx->pc = 0x1b1898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936920), GPR_U32(ctx, 3));
label_1b189c:
    // 0x1b189c: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1b189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1b18a0:
    // 0x1b18a0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1b18a4:
    if (ctx->pc == 0x1B18A4u) {
        ctx->pc = 0x1B18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18A0u;
        // 0x1b18a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18A8u;
        goto label_1b18a8;
    }
    ctx->pc = 0x1B18A0u;
    {
        const bool branch_taken_0x1b18a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18A0u;
        // 0x1b18a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18a0) {
            ctx->pc = 0x1B18C8u;
            goto label_1b18c8;
        }
    }
    ctx->pc = 0x1B18A8u;
label_1b18a8:
    // 0x1b18a8: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x1b18a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b18ac:
    // 0x1b18ac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1b18b0:
    if (ctx->pc == 0x1B18B0u) {
        ctx->pc = 0x1B18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18ACu;
        // 0x1b18b0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18B4u;
        goto label_1b18b4;
    }
    ctx->pc = 0x1B18ACu;
    {
        const bool branch_taken_0x1b18ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18ACu;
        // 0x1b18b0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18ac) {
            ctx->pc = 0x1B18C8u;
            goto label_1b18c8;
        }
    }
    ctx->pc = 0x1B18B4u;
label_1b18b4:
    // 0x1b18b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b18b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b18b8:
    // 0x1b18b8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b18bc:
    // 0x1b18bc: 0xc06c4b0  jal         func_1B12C0
label_1b18c0:
    if (ctx->pc == 0x1B18C0u) {
        ctx->pc = 0x1B18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18BCu;
        // 0x1b18c0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18C4u;
        goto label_1b18c4;
    }
    ctx->pc = 0x1B18BCu;
    SET_GPR_U32(ctx, 31, 0x1B18C4u);
    ctx->pc = 0x1B18C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18BCu;
    // 0x1b18c0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12C0u, 0x1B18BCu, 0x1B18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18C4u;
label_1b18c4:
    // 0x1b18c4: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x1b18c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_1b18c8:
    // 0x1b18c8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1b18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b18cc:
    // 0x1b18cc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b18d0:
    // 0x1b18d0: 0x2442b328  addiu       $v0, $v0, -0x4CD8
    ctx->pc = 0x1b18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947624));
label_1b18d4:
    // 0x1b18d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b18d8:
    // 0x1b18d8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b18d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b18dc:
    // 0x1b18dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b18e0:
    // 0x1b18e0: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1b18e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1b18e4:
    // 0x1b18e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b18e8:
    // 0x1b18e8: 0x60f809  jalr        $v1
label_1b18ec:
    if (ctx->pc == 0x1B18ECu) {
        ctx->pc = 0x1B18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18E8u;
        // 0x1b18ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B18F0u;
        goto label_1b18f0;
    }
    ctx->pc = 0x1B18E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B18F0u);
        ctx->pc = 0x1B18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18E8u;
        // 0x1b18ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B18E8u, 0x1B18F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B18F0u;
label_1b18f0:
    // 0x1b18f0: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x1b18f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b18f4:
    // 0x1b18f4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b18f8:
    // 0x1b18f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1b18fc:
    // 0x1b18fc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1b18fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1b1900:
    // 0x1b1900: 0x24428658  addiu       $v0, $v0, -0x79A8
    ctx->pc = 0x1b1900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
label_1b1904:
    // 0x1b1904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b1908:
    // 0x1b1908: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1b1908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1b190c:
    // 0x1b190c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1b1910:
    if (ctx->pc == 0x1B1910u) {
        ctx->pc = 0x1B1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B190Cu;
        // 0x1b1910: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1914u;
        goto label_1b1914;
    }
    ctx->pc = 0x1B190Cu;
    {
        const bool branch_taken_0x1b190c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B190Cu;
        // 0x1b1910: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b190c) {
            ctx->pc = 0x1B1934u;
            goto label_1b1934;
        }
    }
    ctx->pc = 0x1B1914u;
label_1b1914:
    // 0x1b1914: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b1914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b1918:
    // 0x1b1918: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1b191c:
    if (ctx->pc == 0x1B191Cu) {
        ctx->pc = 0x1B191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1918u;
        // 0x1b191c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1920u;
        goto label_1b1920;
    }
    ctx->pc = 0x1B1918u;
    {
        const bool branch_taken_0x1b1918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1918u;
        // 0x1b191c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1918) {
            ctx->pc = 0x1B1934u;
            goto label_1b1934;
        }
    }
    ctx->pc = 0x1B1920u;
label_1b1920:
    // 0x1b1920: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b1924:
    // 0x1b1924: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b1924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b1928:
    // 0x1b1928: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1b1928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1b192c:
    // 0x1b192c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1930:
    // 0x1b1930: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b1930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1b1934:
    // 0x1b1934: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1b1934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1b1938:
    // 0x1b1938: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_1b193c:
    if (ctx->pc == 0x1B193Cu) {
        ctx->pc = 0x1B193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1938u;
        // 0x1b193c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1940u;
        goto label_1b1940;
    }
    ctx->pc = 0x1B1938u;
    {
        const bool branch_taken_0x1b1938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1938u;
        // 0x1b193c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1938) {
            ctx->pc = 0x1B19A0u;
            goto label_1b19a0;
        }
    }
    ctx->pc = 0x1B1940u;
label_1b1940:
    // 0x1b1940: 0x8e080088  lw          $t0, 0x88($s0)
    ctx->pc = 0x1b1940u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1944:
    // 0x1b1944: 0x8e0700ec  lw          $a3, 0xEC($s0)
    ctx->pc = 0x1b1944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1b1948:
    // 0x1b1948: 0x3908000b  xori        $t0, $t0, 0xB
    ctx->pc = 0x1b1948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)11);
label_1b194c:
    // 0x1b194c: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1b194cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1b1950:
    // 0x1b1950: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x1b1950u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1954:
    // 0x1b1954: 0xc07400e  jal         func_1D0038
label_1b1958:
    if (ctx->pc == 0x1B1958u) {
        ctx->pc = 0x1B1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1954u;
        // 0x1b1958: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B195Cu;
        goto label_1b195c;
    }
    ctx->pc = 0x1B1954u;
    SET_GPR_U32(ctx, 31, 0x1B195Cu);
    ctx->pc = 0x1B1958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1954u;
    // 0x1b1958: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0038u, 0x1B1954u, 0x1B195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B195Cu;
label_1b195c:
    // 0x1b195c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1b1960:
    if (ctx->pc == 0x1B1960u) {
        ctx->pc = 0x1B1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B195Cu;
        // 0x1b1960: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1964u;
        goto label_1b1964;
    }
    ctx->pc = 0x1B195Cu;
    {
        const bool branch_taken_0x1b195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B195Cu;
        // 0x1b1960: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b195c) {
            ctx->pc = 0x1B19A0u;
            goto label_1b19a0;
        }
    }
    ctx->pc = 0x1B1964u;
label_1b1964:
    // 0x1b1964: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1b1964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b1968:
    // 0x1b1968: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1b196c:
    if (ctx->pc == 0x1B196Cu) {
        ctx->pc = 0x1B196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1968u;
        // 0x1b196c: 0x8e228958  lw          $v0, -0x76A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1970u;
        goto label_1b1970;
    }
    ctx->pc = 0x1B1968u;
    {
        const bool branch_taken_0x1b1968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1968u;
        // 0x1b196c: 0x8e228958  lw          $v0, -0x76A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1968) {
            ctx->pc = 0x1B19A4u;
            goto label_1b19a4;
        }
    }
    ctx->pc = 0x1B1970u;
label_1b1970:
    // 0x1b1970: 0xc0899bc  jal         func_2266F0
label_1b1974:
    if (ctx->pc == 0x1B1974u) {
        ctx->pc = 0x1B1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1970u;
        // 0x1b1974: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1978u;
        goto label_1b1978;
    }
    ctx->pc = 0x1B1970u;
    SET_GPR_U32(ctx, 31, 0x1B1978u);
    ctx->pc = 0x1B1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1970u;
    // 0x1b1974: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B1970u, 0x1B1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1978u;
label_1b1978:
    // 0x1b1978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b197c:
    // 0x1b197c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1b1980:
    if (ctx->pc == 0x1B1980u) {
        ctx->pc = 0x1B1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B197Cu;
        // 0x1b1980: 0x8e228958  lw          $v0, -0x76A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1984u;
        goto label_1b1984;
    }
    ctx->pc = 0x1B197Cu;
    {
        const bool branch_taken_0x1b197c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B197Cu;
        // 0x1b1980: 0x8e228958  lw          $v0, -0x76A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b197c) {
            ctx->pc = 0x1B19A4u;
            goto label_1b19a4;
        }
    }
    ctx->pc = 0x1B1984u;
label_1b1984:
    // 0x1b1984: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1b1984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_1b1988:
    // 0x1b1988: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1b1988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_1b198c:
    // 0x1b198c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1b198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_1b1990:
    // 0x1b1990: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b1994:
    if (ctx->pc == 0x1B1994u) {
        ctx->pc = 0x1B1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1990u;
        // 0x1b1994: 0x8e228958  lw          $v0, -0x76A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1998u;
        goto label_1b1998;
    }
    ctx->pc = 0x1B1990u;
    {
        const bool branch_taken_0x1b1990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1990u;
        // 0x1b1994: 0x8e228958  lw          $v0, -0x76A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1990) {
            ctx->pc = 0x1B19A4u;
            goto label_1b19a4;
        }
    }
    ctx->pc = 0x1B1998u;
label_1b1998:
    // 0x1b1998: 0xc098b66  jal         func_262D98
label_1b199c:
    if (ctx->pc == 0x1B199Cu) {
        ctx->pc = 0x1B19A0u;
        goto label_1b19a0;
    }
    ctx->pc = 0x1B1998u;
    SET_GPR_U32(ctx, 31, 0x1B19A0u);
    ctx->pc = 0x262D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262D98u, 0x1B1998u, 0x1B19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19A0u;
label_1b19a0:
    // 0x1b19a0: 0x8e228958  lw          $v0, -0x76A8($s1)
    ctx->pc = 0x1b19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936920)));
label_1b19a4:
    // 0x1b19a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b19a8:
    // 0x1b19a8: 0xae228958  sw          $v0, -0x76A8($s1)
    ctx->pc = 0x1b19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936920), GPR_U32(ctx, 2));
label_1b19ac:
    // 0x1b19ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b19acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b19b0:
    // 0x1b19b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b19b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b19b4:
    // 0x1b19b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b19b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b19b8:
    // 0x1b19b8: 0x3e00008  jr          $ra
label_1b19bc:
    if (ctx->pc == 0x1B19BCu) {
        ctx->pc = 0x1B19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19B8u;
        // 0x1b19bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B19C0u;
        goto label_fallthrough_0x1b19b8;
    }
    ctx->pc = 0x1B19B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19B8u;
        // 0x1b19bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B19B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b19b8:
    ctx->pc = 0x1B19C0u;
}
